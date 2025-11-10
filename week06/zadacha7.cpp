#include <iostream>

using namespace std;

void changeValue(int &num) {
    if (num == 10) {
        return;
        num = 50;
    }

    num = 20;
}

int main() {
    int value = 10;

    changeValue(value);

    cout << value << endl;

    return 0;
}