#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str = "abbbsssbsbs";
    int n = str.length();
    vector<bool> seen(26, false);

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];   
        if(!seen[ch-'a']){
            cout<<ch<<" ";
        }
        seen[ch - 'a'] = true;
    }

}