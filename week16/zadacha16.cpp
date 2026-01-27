#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    private:
        string name;
        int fn;
        double gradePoint;
    
        public:
            Student(string name, int fn, double gradePoint) : 
            name(name), fn(fn), gradePoint(gradePoint) {

            }

            string getName() const {
                return this->name;
            }

            void setName(string name) {
                this->name = name;
            }

            int getFn() const {
                return this->fn;
            }

            void setFn(int fn) {
                this->fn = fn;
            }

            double getGradePoint() const {
                return this->gradePoint;
            }

            void setGradePoint(double gradePoint) {
                this->gradePoint = gradePoint;
            }

            virtual void displayInfo() const {
                cout << "Name: " << this->name << "\n" <<
                "Fn: " << this->fn << "\n" << "Grade point: " << this->gradePoint << endl;
            }
};

class Class {
    private:
        string className;
        vector<Student> students;
    
        public:
            Class (string className, vector<Student> students) : className(className), students(students) {

            }

            void addStudent(const Student& s) {
                students.push_back(s);
            }

            void displayAllStudents() const {
                for (Student s : this->students) {
                    s.displayInfo();
                }
            }
};

class GraduateStudent : public Student {
    private:
        string thesis_topic;

    public:
        GraduateStudent(string name, int fn, double gradePoint, string thesis_topic) : Student(name, fn, gradePoint), thesis_topic(thesis_topic) {

        }

        void displayInfo() const override {
            cout << "Name: " << this->getName() << "\n" <<
                "Fn: " << this->getFn() << "\n" << "Grade point: " << this->getGradePoint() << "\n" 
                << "Thesis topic: " << this->thesis_topic << endl;
        }
};

int main() {
    Student s1("Ivan", 101, 5.50);
    GraduateStudent gs1("Petar", 102, 5.80, "Kvantova Fizika");

    Student* students_array[2];
    students_array[0] = &s1;
    students_array[1] = &gs1;

    for (int i = 0; i <= 1; i++) {
        students_array[i]->displayInfo();
    }

    vector<Student> students;

    Class my_class("223", students);

    my_class.addStudent(s1);
    my_class.addStudent(gs1);

    my_class.displayAllStudents();
}