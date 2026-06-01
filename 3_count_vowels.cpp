#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    if(ch == 'a' 
    || ch == 'e'
    || ch == 'i'
    || ch == 'o'
    || ch == 'u'
    ){
        return true;
    }
    return false;   
}

int main(int argc, char const *argv[])
{
    string str = "aeiouuuuusskajbas";
    int count = 0;
    for(char ch : str){
        if(isVowel(ch)){
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}
