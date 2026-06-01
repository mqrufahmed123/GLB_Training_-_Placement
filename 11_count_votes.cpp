#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int, int> map;
    int arr[] = {1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3};
    for(int i = 0; i < size(arr); i++){ 
        map[arr[i]]++;
    }  

    int win = -1;
    int largest = 0;
    for(auto it : map){
        if(it.second > largest){
            largest = it.second;
            win = it.first;
        }
    }
    cout<<win;
    return 0;
}
