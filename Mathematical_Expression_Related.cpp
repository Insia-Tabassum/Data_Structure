#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(const string& expression) {
    stack<char> parenthes;

    for (char c : expression) {
        if (c == '(' || c == '[' || c == '{') {
            parenthes.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (parenthes.empty()) {
                return false;
            }

            char opening = parenthes.top();
            parenthes.pop();

            if ((opening == '(' && c != ')') ||
                (opening == '[' && c != ']') ||
                (opening == '{' && c != '}')) {
                return false;
            }
        }
    }

    return parenthes.empty();
}

int main() {
    string expression;
    cout << "Enter a mathematical expression: ";
    cin>> expression;

    if (isValid(expression)) {
        cout << " expression is valid." << endl;
    } else {
        cout << " expression is invalid." << endl;

    }

    return 0;
}
