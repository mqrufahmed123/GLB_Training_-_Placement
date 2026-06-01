#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5 ,6, 7, 8};
    int start = 1;
    int end = 5;
    int sum= 0;
    for(int i = start -1; i <= end - 1 && end <= size(arr); i++){
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}
