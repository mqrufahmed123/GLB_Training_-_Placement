#include <bits/stdc++.h>
using namespace std;
/*
    0   1   2 
0   00  01  02
1   10  1
2
3

*/ 
int main(int argc, char const *argv[])
{
    vector<vector<int>> mat= {
        {0, 0, 2},
        {1, 2, 0},
        {1, 0, 0},
        {1, 0, 0}
    };

    int r = mat.size()-1;
    int c = mat[0].size()-1;
    int sum = 0;
    for(int i = 0; i <= r; i++){
        for(int j = 0; j <= c; j++){
            if(i == r || j == c || i == 0 || j==0){
                sum += mat[i][j];
            }
        }
    }

    cout <<sum;
    return 0;
}
