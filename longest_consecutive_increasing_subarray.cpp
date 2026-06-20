#include <bits/stdc++.h>
using namespace std;

int brute(vector<int>& nums, int n){
    int longest = 1;
    for(int i = 0; i < n; i++){
        int count = 1;
        int prev = nums[i];
        for(int j = i+1; j < n; j++){
            if(nums[j] > prev){
                count++;
                prev = nums[j];
            }else{
                break;
            }
        }
        longest = max(longest, count);
    }
    return longest;
}

int better(vector<int>& nums, int n){
    int longest = 1;
    int len = 1;
    for(int i = 1; i < n; i++){
        if(nums[i] > nums[i-1]){
            len++;
        }else{
            len = 1;
        }

        if(len > longest){
            longest = len;
        }
    }
    
    return longest;
}


int main(){
    vector<int> nums = {5, 6, 3, 5, 7, 8, 9, 1, 2};
    int n = nums.size();

    cout << brute(nums, n)<< endl;
    cout << better(nums, n) << endl;

}