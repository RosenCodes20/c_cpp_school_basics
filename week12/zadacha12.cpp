#include <iostream>

using namespace std;

double safe_divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero.");
    }

    return a / b;
}

int main() {
    try
    {
        cout << "Valid output: " << safe_divide(10, 2) << endl;
        safe_divide(10, 0);
    }
    catch(const char* msg)
    {
        std::cerr << "Found error: " << msg << std::endl;
    }
    
    int size;
    cout << "Please enter size: ";
    cin >> size;

    int *dynamic_arr = new int[size];

    for (int i = 0; i < size; i++) {
        dynamic_arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < size; i++) {
        cout << dynamic_arr[i] << endl;
    }

    delete[] dynamic_arr;

    int *single_int = new int(42);
    int *temp_arr = new int[5];

    // delete temp_arr; // GRESHNO: delete ne znae che pametta e masiv -> osvobozhdava se samo purviqt element, a ostanalite ne se osvobozhdavat i ostavat kato tech na pamet
    delete[] temp_arr; // PRAVILNO!
}