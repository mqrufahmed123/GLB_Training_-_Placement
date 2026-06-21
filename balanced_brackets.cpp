#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    stack<int> st;
    string s="[(a)+{c*d}]";
    for(char ele: str){
        if(ele == '{'||ele == '('||ele == '{'){
            st.push(ele);
        }else if(ele == '}'||ele == ')'||ele == ']'){
            if(st.empty()){
                return false;
            }
            char topEle = st.top();
            if(topEle == '(' && ele == ')'
            ||topEle == '{' && ele == '}'
            ||topEle == '[' && ele == ']'){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    string s="[(a)+{c*d}]";
    stack<char> st;
    for(int i = 0; i < s.length();i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '{'){
            st.push(s[i]);
        }else if(s[i]=='}'||s[i]==')'||s[i]=='}'){
            if(st.empty()){
                cout<<"false";
                break;
            }
            char topEle = st.top();
            if(topEle == '{' && s[i]=='}' 
            ||topEle == '(' && s[i]==')'
            ||topEle == '[' && s[i]==']'){
                st.pop();
            }else{
                // cout<<"false";
                break;
            }

        }
    }

    if(st.empty()){
        cout<<"true";
    }else{
        cout<<"false";
    }

    if(isBalanced(s)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}