#include <bits/stdc++.h>
#define limit 10
using namespace std;
int s[limit];
int top = -1;
string reverse_str(string);

int main(){
    string str;
    cin>>str;
    string revrse=reverse_str(str);
    cout<<revrse;
    return 0;
}

string reverse_str(string str){
stack<char> charStack;

    // Push each character onto the stack
    for (char c : str) {
        charStack.push(c);
    }

    // Pop characters from the stack to construct the reversed string
    string reversedString;
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}