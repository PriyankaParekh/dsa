#include <bits/stdc++.h>

using namespace std;

int evaluatePostfix(string expression) {
    stack<int> stk;

    for (char c : expression) {
        if (isdigit(c)) {
            stk.push(c - '0');  // Convert char digit to integer and push to stack
        } else {
            int operand2 = stk.top();
            stk.pop();
            int operand1 = stk.top();
            stk.pop();

            switch (c) {
                case '+':
                    stk.push(operand1 + operand2);
                    break;
                case '-':
                    stk.push(operand1 - operand2);
                    break;
                case '*':
                    stk.push(operand1 * operand2);
                    break;
                case '/':
                    stk.push(operand1 / operand2);
                    break;
            }
        }
    }

    return stk.top();
}

int main() {
    string expression;
    cout << "Enter the postfix expression: ";
    cin>>expression;

    int result = evaluatePostfix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
