#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress5(vector<char> chars){
    int read = 0;
    int write = 0;
    int count = 0;
    int n = chars.size();

    while(read < n){    
        char curr = chars[read];
        while(read<n && chars[read] == curr){
            count++;
            read++;
        }
        chars[write++] = curr;
        if(count > 1){
            string str = to_string(count);
            for(char ch : str){
                chars[write++] = ch;
            }
        }
    }
    return write;
}


int compress4(vector<char>& chars){
    int read = 0;
    int write = 0;
    int n = chars.size();
    int count = 0;
    while(read < n){
        char curr = chars[read];
        
        while(read < n && chars[read] == curr){
            count++;
            read++;
        }

        chars[write++] = curr;
        if(count > 1){
            string str = to_string(count);
            for(char ch : str){
                chars[write++] = ch;
            }
        }
    }
    return write;
}

int compress3(vector<char>& chars){
    int n = chars.size();
    int write = 0;
    int read = 0;
    int count = 0;
    while(read < n){
        char curr = chars[read];
        while(read < n && chars[read] == curr){
            count++;
            read++;
        }
        chars[write++] = curr;
        if(count > 1){
            string str = to_string(count);
            for(char ch : str){
                chars[write++] = ch;
            }
        }
        return write;
    }
}

int compress2(vector<char>& chars){
    int n = chars.size();
    int write = 0;
    int read = 0;

    while(read < n){
        // picked one
        char current = chars[read];
        int count = 0;

        // count consecutive occurrences
        while(read < n && chars[read] == current){
            count++;
            read++;
        }

        chars[write++] = current;
        // count greater than 1 hai to no 
        // ko string main convert karke karo 
        // write count if greater than 1
        if(count > 1){
            string cnt = to_string(count);

            for(char digit : cnt){
                chars[write++] = digit;
            }
        }
    }
    return write;
}


int compress(vector<char>& chars) {
    int n = chars.size();
    int write = 0;
    int read = 0;

    while (read < n) {
        char current = chars[read];
        int count = 0;

        // Count consecutive occurrences
        while (read < n && chars[read] == current) {
            count++;
            read++;
        }

        // Write the character
        chars[write++] = current;

        // Write count if greater than 1
        if (count > 1) {

            string cnt = to_string(count);

            for (char digit : cnt) {
                chars[write++] = digit;
            }
        }
    }

    return write;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int newLength = compress5(chars);

    cout << "Compressed Length: " << newLength << endl;

    cout << "Compressed Array: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}