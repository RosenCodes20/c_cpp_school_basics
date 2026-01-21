#include <iostream>
#include <string>

using namespace std;

class Employee {
    protected:
        string name;
        double salary;

    public:
        Employee(string name, double salary) {
            this->name = name;
            this->salary = salary;
        }

        virtual double calculateBonus() const {
            return this->salary * 0.10;
        }

        virtual void displayInfo() const {
            cout << "Employee name: " << this->name + "\n" <<
                    "Employee salary: " << this->salary << "\n"; 
        }

        string getName() const {
            return this->name;
        }

        double getSalary() const {
            return this->salary;
        }

        void setName(string name) {
            this->name = name;
        }

        void setSalary(double salary) {
            this->salary = salary;
        }
};

class Manager : public Employee {
    private:
        string department;

    public:
        Manager(string name, double salary, string department) : Employee(name, salary) {
            this->department = department;
        }

        double calculateBonus() const override {
            return this->salary * 0.20;
        }

        string getDepartment() const {
            return this->department;
        }

        void setDepartment(string department) {
            this->department = department;
        }
};

int main() {
    Employee e1("Ivan Ivanov", 3000.0);
    Manager m1("Petar Petrov", 5000.0, "IT");

    Employee* employees[2];
    employees[0] = &e1;
    employees[1] = &m1;

    for (int i = 0; i < 2; i++) {
        std::cout << employees[i]->getName() << " Bonus: " << employees[i]->calculateBonus() << std::endl;
    }
}