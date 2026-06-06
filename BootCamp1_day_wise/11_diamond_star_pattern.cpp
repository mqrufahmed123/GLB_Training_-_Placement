#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;

    for(int i = 0; i < n+n; i++){
        if(i < n){

            for(int sp = 0; sp < n-i-1; sp++){
                cout<<" ";
            }   

            for(int j = 0; j < 2*i+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }else{
            int indx = i%n;

            for(int sp = 0; sp <= indx; sp++){
                cout<<" ";
            }
           for(int k = 0; k < 2*(n- indx-1)-1; k++){
            cout<<"*";
           }
            cout<<endl;
        }
        
    }
}