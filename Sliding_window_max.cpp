#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i < n; i++){

        // remove indices outside the window
        while(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }

        // remove smaller elements
        while(!dq.empty() && nums[dq.back()] < nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);

        // window formed
        if(i >= k -1){
            ans.push_back(nums[dq.front()]);
        }
    }
}

int main() {
    vector<int> arr = {1, 3, 2, 1, 7, 3};
    int k = 3;
    vector<int> res = maxOfSubarrays(arr, k);
    for (int maxVal : res) {
        cout << maxVal << " ";
    }
    return 0;
}