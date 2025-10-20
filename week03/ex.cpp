#include <iostream>
using namespace std;

int main()
{
    double gradesArr[5] = {4.50, 4, 3, 5.50, 6};

    // solution 1

    // for (int i = 0; i < 5; i++) {
    //     if (gradesArr[i] > 4.50) {
    //         cout << gradesArr[i] << endl;
    //     }
    // }

    // solution 2

    for (double grade: gradesArr) {
        if (grade > 4.50) {
            cout << grade << endl;
        }
    }
}