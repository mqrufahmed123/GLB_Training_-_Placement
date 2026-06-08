#include <iostream>
using namespace std;
int main(){ 

    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j;
    for(int i = 1; i < n; i++){
        int key = arr[i];
        j = i -1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(auto e:arr)cout<<e<<" ";
}