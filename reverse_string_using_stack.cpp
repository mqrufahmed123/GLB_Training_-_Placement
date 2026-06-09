#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="Hello";
    stack<char> st;

    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }

    for(int i = 0; i < str.length(); i++){
        char ch = st.top();
        st.pop();
        cout<<ch;
    }
}