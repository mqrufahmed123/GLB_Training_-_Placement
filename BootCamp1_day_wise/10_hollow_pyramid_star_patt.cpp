#include <bits/stdc++.h>
using namespace std;
int main(){
    int  n = 10;

    /*
            *
           *.*
          *...*
         *.....*
        *********
        

    */ 
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n-i-1; k++){
            cout<<" ";
        }
    
        for(int j = 0; j < 2*i+1; j++){
            if(j == 0 || j == 2*i || i == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}