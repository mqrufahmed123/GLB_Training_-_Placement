#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


string removeDuplicateLetters2(string s){
    
    vector<int> freq(26, 0);
    vector<bool> visited(26, false);
    
    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;
    }

        string st;

        for(char ch : s){
            freq[ch - 'a']--;

            if(visited[ch - 'a']){
                continue;
            }
            while(!st.empty() && ch < st.back() && freq[st.back() - 'a'] > 0){
                visited[st.back() - 'a'] = false;
                st.pop_back();
            }
            
            st.push_back(ch);
            visited[ch - 'a'] = true;
        }
        return st;
    }

    string removeDuplicateLetters(string s) {
        
        // frequency of each character
        vector<int> freq(26, 0);
        
        // check if character already exists in result
        vector<bool> visited(26, false);

        // count frequencies
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        string st;

        for(char ch : s) {

            // current character is being used
            freq[ch - 'a']--;

            // skip if already present
            if(visited[ch - 'a']) {
                continue;
            }

            // maintain lexicographically smallest order
            while(!st.empty() &&
                  ch < st.back() &&
                  freq[st.back() - 'a'] > 0) {

                visited[st.back() - 'a'] = false;
                st.pop_back();
            }

            st.push_back(ch);
            visited[ch - 'a'] = true;
        }

        return st;
    }
};

string remove_duplicates(string s){
    unordered_map<char, int> freq;
    vector<bool> visited(26, false);

    for(char ch : s){
        freq[ch]++;
    }
    string st;
    for(char ch : s){
        freq[ch]--;
        if(visited[ch-'a'] == true){
            continue;
        }

        while(!st.empty() && ch < st.back() && freq[st.back()] > 0){
            visited[st.back()-'a'] = false;
            st.pop_back();
        }
        st.push_back(ch);
        visited[ch-'a'] = true;
    }
    return st;
}

int main() {

    Solution obj;

    string s = "cbacdcbc";

    int left = 0;
    int right = s.length()-1;

    while(left < right && s[left] == ' '){
        left++;
    }
    

    while(left < right && s[right] == ' '){
        right--;
    }
    int len = right - left +1;
    s = s.substr(left, len);

    cout << remove_duplicates(s);

    return 0;
}