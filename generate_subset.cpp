#include <vector>
#include <iostream>
using namespace std;

// Method 1: recursion
void generate_sub(vector<int>& arr, int i, vector<int>& curr){
    if(i == arr.size()){
        cout<<"{";
        for(int x:curr){
            cout<<x<<" ";
        }
        cout<<"}\n";
        return;
    }

    // take
    curr.push_back(arr[i]);
    generate_sub(arr, i+1, curr);
    
    // not take
    curr.pop_back();
    generate_sub(arr, i+1, curr);
}

int main(){
    vector<int> arr = {1, 2, 3, 4};
    vector<int> curr;
    generate_sub(arr, 0, curr);
}