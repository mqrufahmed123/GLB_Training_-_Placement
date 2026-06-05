#include <bits/stdc++.h>
using namespace std;

bool balanceParanthesis(string str){
    stack<char> st;
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(str[i] == '('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }else{
            if(st.empty()){
                return false;
            }
            if((str[i]== ')' && st.top()!='(')
            ||(str[i]=='}'&& st.top()!='{')
            ||(str[i]=='['&& st.top()!='[')){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string str = "[({)]";
    if(balanceParanthesis(str)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}