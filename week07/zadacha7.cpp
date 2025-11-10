#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string name;
    int fn;
    double avg_grade;
};

void save_student(const Student& s);

int main() {
    // zad 1

    string name;
    string surname;
    int age;

    cout << "Please enter name: ";
    cin >> name;

    cout << "Please enter surname: ";
    cin >> surname;

    cout << "Please enter age: ";
    cin >> age;

    ofstream out_file("users.txt", ios::app);

    if (out_file.is_open()) {
        out_file.clear();
        out_file << name << " " << surname << " " << age << '\n';
    } else {
        cerr << "Mistake with opening the file" << endl;
    }

    out_file.close();

    // zad 2

    ifstream in_file("users.txt");

    while (in_file >> name >> surname >> age) {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
    }

    in_file.close();

    // zad 3
    Student studentOne = {"Rosen", 22324, 5.92};
    Student studentTwo = {"Ioan", 22317, 5.49};

    save_student(studentOne);
    save_student(studentTwo);
}

void save_student(const Student &s) {
    ofstream out_file("students.csv", ios::app);

    if (out_file.is_open()) {
        out_file << s.name << "," << s.fn << "," << s.avg_grade << '\n';
    } else {
        cerr << "Mistake with opening the file" << endl;
    }

    out_file.close();
}