#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 1, 1, 0, 2, 2, 1, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0; 
    int high = n -1;
    int mid = 0;

    // mid = low + (high - low)/2;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(auto e:arr)cout<<e<<" ";
}