#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr = {3, 3 ,2, 2, 1, 1, 1};

    unordered_map<int, int> freq;

    for(auto ele : arr){
        freq[ele]++;
    }

    sort(arr.begin(), arr.end(), [&](int a, int b){
        if(freq[a] == freq[b]){
            return a < b;
        }
        return freq[a] > freq[b];
    });

    for(int ele : arr){
        cout << ele << " ";
    }
}