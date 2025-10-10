#include <iostream>

using namespace std;

int main() {
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