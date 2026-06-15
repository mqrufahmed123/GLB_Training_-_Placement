#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n-1);
}

void printton(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    printton(n-1);
    cout<<n<<" ";
}

int main(){
    printton(100);
    cout<<"\nFactorial: "<<fact(5);
}