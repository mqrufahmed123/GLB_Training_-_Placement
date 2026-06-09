#include <bits/stdc++.h>
using namespace std;

#define MAX 100



int main(){
    int mat[MAX][MAX] = {INT_MIN};

    int r, c;
    cin >> r >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << mat[i][j] << " ";
        }
        cout<<endl;
    }
    int manip;
    cout<<"\nEnter manispulation 0 for rows 1 for colums";
    cin >> manip;

    int index;
    cout<<"\nEnter the index: ";
    cin >> index;

    for(int i = 0; i < r; i++){
        if(manip == 0 && i == index){
            i++;
        }
        for(int j = 0; j < c; j++){
            if(manip == 1 && j == index){
                j++;
            }
        }
    }

}