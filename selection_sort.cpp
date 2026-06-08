#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = size(arr);
    
  
        for(int i = 0; i < n ; i++){
            int minIndx = i;
            for(int j = i; j < n; j++){
                if(arr[j] < arr[minIndx]){
                    minIndx = j;
                }
            }
            swap(arr[i], arr[minIndx]);
        }
    

    for(auto e:arr){
        cout<<e<<" ";
    }
}