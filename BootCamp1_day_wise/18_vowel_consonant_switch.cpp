#include <bits/stdc++.h>
using namespace std;
int main(){
    char ch; 
    cin >> ch;
    ch = tolower(ch);

    if(!isalpha(ch)){
        cout<<"It is not an aphabet";
    }else{
        switch(ch){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'o': 
            case 'u':   cout<<"vowel";
                        break;
            default:    
                    cout<<"It's a consonant";
                    break;
        }
    }
}