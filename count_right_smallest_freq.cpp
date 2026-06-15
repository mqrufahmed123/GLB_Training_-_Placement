#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 2 ,7};
    int n = 5;
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = i+1; j < n; j++){
            if(arr[j]<arr[i]){
                cnt++;  
            }
        }
        ans[i] = cnt;
    }
    for(auto e:ans)cout<<e<<" ";
}