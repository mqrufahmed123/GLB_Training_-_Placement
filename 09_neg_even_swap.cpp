#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };
    int r = mat.size();
    int c = mat[0].size();
    for(int i = 0; i < r; i+=2){
        for (int j = 0; j < c; j++)
        {
            // if((i%2)){
                mat[i][j] *= -1;
                // swap()
            // }
        }
    }

    
    // 7 = 2

    int left = 0;
    int right = (r-1 % 2)? r-1 : r;

    while(left < right){
        swap(mat[left], mat[right]);
        left+=2;
        right-=2;
    }

    for(auto row : mat){
        for(auto ele : row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
