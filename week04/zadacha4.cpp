#include <iostream>
#include <cstring>

using namespace std;

void increase_value(int num);
void increase_reference(int &num);
double average_array(const int arr[], int size);

int main() 
{   
    // zad 1

     int myArr[10];
     int sum = 0;

     for (int i = 0; i < 10; i++) {
        cout << "Please enter number [ " << i << " ]: ";
        cin >> myArr[i];
     }

     for (int number : myArr) {
        if (number > 0) {
            sum += number;
        }
     }
     
     int max = myArr[0];

     for (int i = 1; i < 10; i++) {
        if (myArr[i] > max) {
            max = myArr[i];
        }
     }

     cout << "The max is: " << max << endl;
     cout << "The sum is: " << sum << endl;

    // zad 2

    char someArr[50];
    string name;

    cout << "Enter name: ";
    getline(cin, name);

    // cin >> name - не работи за въвеждане на стринг със спейс !!!!!!!!!!

    int i = 0;
    for (char character : name) {
        someArr[i] = character;
        
        i++;
    }

    someArr[i] = '\0';

    for (int i = strlen(someArr) - 1; i >= 0; i--) {
        cout << someArr[i];
    }

    cout << endl;

    // zad 3

    int x = 5;
    increase_value(x);
    cout << x << endl; // 5 - Няма промяна, защото се подава копие на данните  и всички промени във функцията не засягат реалната променлива в main функцията.

    increase_reference(x);
    cout << x << endl; // 15 - Има пормяна, защото взимаме по референция с оператора & и всички промени които правим на променливата се извършват върху оригиналната променлива, т.е ще има промени в scope - a на main метода.
    
    // zad 4

    int arr[] = {6, 5, 6, 5, 6};
    int size = 5;

    cout << average_array(arr, size) << endl;
}

void increase_value(int num) {
    num += 10;
}

void increase_reference(int &num) {
    num += 10;
}

double average_array(const int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = (double) sum / size;

    return average;
}
