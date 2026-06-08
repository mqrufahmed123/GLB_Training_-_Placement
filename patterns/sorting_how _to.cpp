#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-1, 4, 3, 2, 1};

    sort(arr.begin(), arr.end(), greater<int>());

    for(auto ele : arr) cout<<ele<<" ";
}   