#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat = {
        {1, 2, 3},
        {1, 2, 3, 3},
        {1, 2, 3}
    };
    
    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size()/2; j++){
            swap(mat[i][j], mat[i][mat[i].size()-j-1]);
        }
    }

    for(auto &rows: mat){
        for(auto &ele : rows){
            cout<< ele <<" ";
        }
        cout<<"\n";
    }
    
}