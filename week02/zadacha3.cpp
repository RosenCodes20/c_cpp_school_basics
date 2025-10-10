#include <iostream>

using namespace std;

int main() {
    // zad 1

    int year;

    cout << "Enter year: ";

    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout << "Leap year!!" << endl;
    } else {
        cout << "Not leap year!" << endl;
    }

    // zad 2

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

    // zad 3

    for (int multiplicator = 1; multiplicator <= 10; multiplicator++) {

        for (int main_num = 1; main_num <= 10; main_num++) {
            cout << multiplicator << " * " << main_num << " = " << main_num * multiplicator << "\t";
        }

    cout << endl;
    }

    // zad 4

    int sum = 0;

    int num;

    cout << "Please enter number: ";
    cin >> num;

    while (num > 0)
    {
        sum += num;

        cout << "Please enter number: ";
        cin >> num;
    }

    if (sum == 0) {
        cout << "Nothing has added : (" << endl;
    } else {
        cout << sum << endl;
    }
}
