#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> s1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
            s1.push(s[i]);
        } else if (s[i] == '}' && !s1.empty() && s1.top() == '{') {
            s1.pop();
        } else if (s[i] == ']' && !s1.empty() && s1.top() == '[') {
            s1.pop();
        } else if (s[i] == ')' && !s1.empty() && s1.top() == '(') {
            s1.pop();
        } else {
            // If the current character is none of the opening or closing brackets, it's invalid
            cout << "Not balanced ";
            return 0;
        }
    }

    // Check if the stack is empty after processing the entire string
    if (s1.empty()) {
        cout << "Balanced brackets";
    } else {
        cout << "Not balanced ";
    }

    return 0;
}
