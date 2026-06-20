#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int sp = 0; sp < i; sp++){
            cout<<" ";
        }
        for(int j = 1; j < n-i+1; j++){
            cout<<j;
        }
        for(int k = n-i-1; k > 0; k--){
            cout<<k;
        }
        cout<<endl;
    }
}