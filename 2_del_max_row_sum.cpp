#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void removeMaxRow(vector<vector<int>>& mat, int r,int c){
    if(mat.empty()) return;

    int maxRow = INT_MIN;
    int maxSum = 0;
    int sum = 0;
 
    for(int i = 0; i < r; i++){
        sum = 0;
        for(int j = 0;j < c; j++){
            sum +=  mat[i][j];
            
        }
        if(sum > maxSum ){
            maxSum = sum;
            maxRow = i;
        }
    }
    mat.erase(mat.begin()+maxRow);
}


int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {10, 20, 30},
        {4, 5, 6}
    };
    int r = 3;
    int c = 3;
    removeMaxRow(matrix, r, c);

    for (auto& row : matrix) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << '\n';
    }
}