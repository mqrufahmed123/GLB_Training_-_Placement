#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;

    for(int i = n-1; i >= 0; i--){
        for(int sp = 0; sp < n - i -1; sp++){
            cout<<" ";
        }
        for(int st = 0; st < 2*i + 1; st++){
            cout<<"*";
        }
        cout<<endl;
    }
}