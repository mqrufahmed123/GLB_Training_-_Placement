#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    for(int i = 1; i <= n; i++){
        for(int sp = n - 1; sp >= i; sp--){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<j;
        }
        for(int k = i-1; k >= 1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}