#include <iostream>

using namespace std;

int main() {
    int numerator;
    int divider;

    cout << "Въведете първото число:";

    cin >> numerator;

    cout << "Въведете второто число:";

    cin >> divider;

    cout << numerator / divider << "\n";

    double result = double(numerator) / divider;

    cout << result;
}