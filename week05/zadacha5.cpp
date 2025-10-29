#include <iostream>

using namespace std;

void swap_by_pointer(int *a, int *b);

int main() {
    // zad 1

    int num = 15;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value which point the ptr: " << *ptr << endl;

    // zad 2

    *ptr = 42;

    cout << endl;
    cout << "Value of num: " << num << endl;
    cout << "Value which point to ptr after the change: " << *ptr << endl;

    // zad 3

    int x = 10;
    int y = 20;

    swap_by_pointer(&x, &y);

    cout << endl;
    cout << "After swap x: " << x << endl;
    cout << "After swap y: " << y << endl;

    // zad 4
    int arr[] = {1, 2, 3, 4, 5};

    int *arr_ptr = arr;

    cout << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << *(arr_ptr + i) << " ";
    }
}

void swap_by_pointer(int *a, int *b) {
    int tempVar = *a;
    *a = *b;
    *b = tempVar;
}