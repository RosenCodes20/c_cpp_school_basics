#include <iostream>
using namespace std;

void get_number_by_value(int a);
void get_number_by_refference(int &a);

int main() {
    int a = 10;

    get_number_by_value(a);

    cout << a << endl;

    get_number_by_refference(a);

    cout << a << endl;
}

void get_number_by_value(int a) {
    a+=5;
}

void get_number_by_refference(int &a) {
    a+=5;
}