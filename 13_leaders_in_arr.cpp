#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {4, 7, 3, 2, 1};
    int small = INT_MIN;  

    vector<int> res;
    for(int i = size(arr)-1; i >=0; i--){
        if(arr[i] > small){
            res.push_back(arr[i]);
            small = arr[i];
        }
    }

    reverse(res.begin(), res.end());
    for(auto e:res) cout<<e<<" ";
    return 0;
}
