#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, -1, 4};
    int s = INT_MAX;
    int indx;
    int n = size(arr);
    for(int i = 0; i < n; i++){
        if(s > arr[i]){
            s = arr[i];
            indx = i;
        }
    }
    arr.erase(arr.begin()+indx);

    for(int e:arr) cout<<e<<" ";
    return 0;
}
