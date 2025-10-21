#include <iostream>
using namespace std;

void returnArrayFilled(int arrayEntered[11], int arrLength);

int main()
{
    int arrLength = 11;
    int someArr[arrLength];
    
    returnArrayFilled(someArr, arrLength);

    for (int num : someArr) {
        cout << num << " ";
    }
}

void returnArrayFilled(int arrayEntered[11], int arrLength) {
    for (int i = 0; i <= arrLength; i++) {
        arrayEntered[i] = i;
    }
}
