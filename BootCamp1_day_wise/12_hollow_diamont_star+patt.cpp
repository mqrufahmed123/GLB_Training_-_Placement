#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;

    int left = n-1, right = n;
    for(int i  =0; i < 2*n; i++){
        if(i<n){
        for(int j = 0; j < 2*n; j++){
            // && j != n+n-1
            if(j >= left && j <= right && i != 0 ){
                cout<<" ";
               
            }else{
                cout<<"*";
            }
           
        }
        if(i > 0 && i < n-1){
            left--;
            right++;
        }
        if(i < n-1){
            cout<<endl;
        }
        }else{
            for(int j = 0; j < 2*n; j++){
                if(j >= left && j <= right && i != 2*n-1 ){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }
            left++;
            right--;
            cout<<endl;
        }
    }

}