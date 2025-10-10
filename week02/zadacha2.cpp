#include <iostream>

using namespace std;

int main() {
    int num1;
    int num2;
    char op;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter operator: ";
    cin >> op;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0 || num1 == 0) {
                cout << "Cannot divide by zero" << endl;
                break;
            }

            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;

        default:
            cout << "Invalid entered operator!" << endl;
            break;
    }
}