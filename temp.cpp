#include <bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello world c++";

    stringstream ss(str);

    string word;

    while(ss>>word){
        cout<<word<< endl;
    }
}