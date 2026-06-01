#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> newRow = {10, 11,12};
    int rowIndex = 1;

    mat.insert(mat.begin()+ rowIndex, newRow);

    vector<int> newCol = {11, 12, 13, 14, 16};
    int colIndex =1;    
    for(int i = 0; i < mat.size(); i++){
        mat[i].insert(mat[i].begin()+colIndex, newCol[i]);
    }

    for(auto row: mat){
        for(auto ele : row){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}