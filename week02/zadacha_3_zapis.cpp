#include <iostream>

using namespace std;

int main() {
    for (int multiplicator = 1; multiplicator <= 10; multiplicator++) {
        for (int main_num = 1; main_num <= 10; main_num++) {
            cout << multiplicator << " * " << main_num << " = " << main_num * multiplicator << "\t";
        }
    cout << endl;
    }
    
}