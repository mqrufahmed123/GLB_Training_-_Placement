#include <bits/stdc++.h>
using namespace std;

vector<int> stockspan2(vector<int> prices){
    int n = prices.size();
    stack<int> st;
    vector<int> res(n);

    for(int i = 0; i < n; i++){
        while(!st.empty() && prices[st.top()] <= prices[i]){
            st.pop();
        }

        if(st.empty()){
            res[i] = i+1; // i guess this is for the first ele
        }else{
            res[i] = i - st.top(); // count the curr ele upto all the smallest to the left
        }
        st.push(i);
    }
    return res;
}

vector<int> stockspan(vector<int> prices){
    int n = prices.size();
    vector<int> span(n);
    stack<int> st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && prices[st.top()] <= prices[i]){
            st.pop();
        }
        if(st.empty()){
            span[i] = i+1;
        }else{
            span[i] = i - st.top();
        }
        st.push(i);
    }
    return span;
}

int main(){
    vector<int> prices =  {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans = stockspan2(prices);

    for(int ele : ans){
        cout<<ele<<" ";
    }
}