#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b , c;
    int ch;
    
    while(1){
        cout<<"Enter: \n1.sides \n2. angles\n3. Exit"<<endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter sides:";
            cin >> a >> b >> c;
            // int max_side = max(a, b, c);
            if(a > 0 && b > 0 && c > 0 && a+b > c && a+c > b && b+c > a){
                cout<<"Valid triangle";
            }else{
                cout<<"Invalid triangle";
            }
            break;
        case 2:
            cout<<"Enter angles:";
            cin >> a >> b>> c;
            if(a > 0 && b > 0 && c > 0 && a+b+c == 180){
                cout<<"Valid triangle";
            }else{
                cout<<"Invalid triangle";
            }
            break;
        case 3:
            exit(0);
            break;
        
        default:
            break;
        }
    }
}