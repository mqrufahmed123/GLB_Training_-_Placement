#include <iostream>
#include <vector>
using namespace std;

int optimal(vector<int>& arr){
    int n = arr.size();
}

int maxwaterbetter(vector<int>& arr){
    int n = arr.size();
    vector<int> pre(n);
    vector<int> post(n);
    
 
    pre[0] = arr[0];
    for(int i = 1; i < n; i++){
        pre[i] = max(pre[i-1], arr[i]);
    }
    post[n-1] = arr[n-1];
    for(int j = n-2; j >= 0; j++){
        post[j] = max(post[j+1], arr[j]);
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        int minOf2 = min(pre[i], post[i]);
        res += minOf2 - arr[i];
    }
    return res;
}

vector<int> maxWater_bruteforce(vector<int>& arr) {
    int n = arr.size();
    vector<int> res(n, -1);
    for(int i = 0; i < n; i++){
        int left = arr[i];
        // min max in the left 
        for(int j = 0; j < i; j++){
            if(arr[j] > left){
                left = arr[j];
            }
        }
        int right = arr[i];
        // find max in the right
        for(int j = i+1; j < n; j++){
            if(arr[j] > right){
                right = arr[j];
            }
        }

        res[i] = min(left, right) - arr[i];
    }
    return res;
}

int main() {
    vector<int> arr = { 2, 1, 5, 3, 1, 0, 4 };
    vector<int> res;
    res = maxWater_bruteforce(arr);

    int ans = maxwaterbetter(arr);

//   for(int i = 0; i < arr.size(); i++){
//         cout<<res[i]<<" ";
//     }  
    return 0;
}   