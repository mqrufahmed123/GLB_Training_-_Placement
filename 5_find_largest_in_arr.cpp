#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3 ,4,  5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = INT_MIN;
    for(int i = 0; i < n; i++){
        if(l < arr[i]){
            l = arr[i];
        }
    }
    cout<<l<<endl;
    return 0;
}
