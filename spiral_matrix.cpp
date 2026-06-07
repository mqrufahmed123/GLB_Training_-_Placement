#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {12,13,14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}
    };  
    int colBegin = 0;
    int colEnd = mat[0].size()-1;
    int rowBegin = 0;
    int rowEnd = mat.size()-1;
    

    while(colBegin <= colEnd && rowBegin <= rowEnd){
        for(int i = colBegin; i <= colEnd; i++){
            cout<<mat[rowBegin][i]<<" ";
        }
        rowBegin++;
        for(int i = rowBegin; i <= rowEnd; i++){
            cout<<mat[i][colEnd]<<" ";
        }
        colEnd--;
        if(rowBegin <= rowEnd){
            for(int i = colEnd; i >= colBegin; i--){
                cout<<mat[rowEnd][i]<<" ";
            }
            rowEnd--;
        }

        if(colBegin <= colEnd){
            for(int i = rowEnd; i >= rowBegin; i--){
                cout<<mat[i][colBegin]<<" ";
            }
            colBegin++;
        }
        
    }
}