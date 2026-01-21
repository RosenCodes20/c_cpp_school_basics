#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;

template <typename T>
void safe_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
} 

int main() {
    // 1
    int firstIntChange = 1, secondIntChange = 2;
    safe_swap(firstIntChange, secondIntChange);
    cout << "First int change: " << firstIntChange << ", second int change: " << secondIntChange << endl;

    double firstDoubleChange = 1.5, secondDoubleChange = 2.5;
    safe_swap(firstDoubleChange, secondDoubleChange);
    cout << "First double change: " << firstDoubleChange << ", second double change: " << secondDoubleChange << endl;

    string firstStringToChange = "Rosen", secondStringToChange = "Ivanov";
    safe_swap(firstStringToChange, secondStringToChange);
    cout << "First string change: " << firstStringToChange << ", second string change: " << secondStringToChange << endl;

    // 2
    vector<double> grades;
    double sum = 0;
    grades.push_back(4);
    grades.push_back(6);
    grades.push_back(5.50);
    
    // 2.1
    cout << "Grades size: " << grades.size() << endl;

    for (double grade: grades) {
        sum += grade;
    }

    // 2.2
    cout << "Grades sum: " << sum << endl;

    // 2.3
    cout << "Grades average: " << setprecision(2) << sum / grades.size() << endl;

    // 3
    string firstName = "Rosen";
    string lastName = "Ivanov";

    string fullName = firstName + " " + lastName;
    cout << "Full name: " << fullName << endl;
    cout << "Full name length: " << fullName.length() << endl;
}

