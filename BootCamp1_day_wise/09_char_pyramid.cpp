#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int sp = n-1; sp > 0; sp++){
            cout<<sp;
        }
        char ch = 'A';
        for(int j=0; j < n; j++){
            cout<<ch++;
        }
        
    }
}