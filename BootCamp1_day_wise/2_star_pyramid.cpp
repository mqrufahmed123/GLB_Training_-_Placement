#include <bits/stdc++.h>
using namespace std;
int main(){
    int n =5;
    for(int i = 0; i < n; i++){
        for(int space = i; space < n-1; space++ ){
            cout<<" ";  
        }
        for(int j = 0; j <   2*i +1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}