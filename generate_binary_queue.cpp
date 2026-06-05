#include <iostream>
#include <queue>
using namespace std;

void generateBinary(int n) {
    queue<string> q;

    q.push("1");
    for(int i = 1; i <= n; i++){
        string curr = q.front();
        q.pop();

        cout<<curr<<" ";

        /*
                    1
                10     11
            100   101    110  111
        */ 

        q.push(curr+"0");
        q.push(curr+"1");
    }
}

int main() {
    int n = 5;

    generateBinary(n);

    return 0;
}