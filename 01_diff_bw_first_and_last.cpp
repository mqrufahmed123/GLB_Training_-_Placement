#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4 ,-5};

    int n = size(arr);

    int diff = abs(arr[n-1] - arr[0]);

    cout<<diff<<endl;
}