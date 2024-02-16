// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// int precedence(char op) {
//     if (op == '+' || op == '-')
//         return 1;
//     if (op == '*' || op == '/')
//         return 2;
//     return 0;
// }

// string infixToPostfix(const string& infix) {
//     stack<char> s;
//     string postfix;

//     for (char c : infix) {
//         if (isalnum(c)) { // Operand
//             postfix += c;
//         } else if (c == '(') {
//             s.push(c);
//         } else if (c == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop(); // Discard '('
//         } else { // Operator
//             while (!s.empty() && precedence(c) <= precedence(s.top())) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(c);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix_expression = "a+b*(c-d)/e";
//     string postfix_expression = infixToPostfix(infix_expression);
//     cout << "Infix expression: " << infix_expression << endl;
//     cout << "Postfix expression: " << postfix_expression << endl;
//     return 0;
// }



#include <iostream>
#include <stack>
#include <string>

using namespace std;

int evaluatePostfix(const string& postfix) {
    stack<int> s;

    for (char c : postfix) {
        if (c >= '0' && c <= '9') { // Check if character is a digit
            s.push(c - '0'); // Convert char to int and push to stack
        } else {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();

            switch (c) {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    s.push(operand1 - operand2);
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    s.push(operand1 / operand2);
                    break;
            }
        }
    }

    return s.top();
}

int main() {
    string postfix_expression = "231*+9-";
    int result = evaluatePostfix(postfix_expression);
    cout << "Postfix expression: " << postfix_expression << endl;
    cout << "Result: " << result << endl;
    return 0;
}
