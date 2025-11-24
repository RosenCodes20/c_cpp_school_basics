#include <iostream>
using namespace std;

class Car {
private:
      string brand;
      int year;
      int speed;

public:
      Car() {
            this->brand = "Unknown";
            this->year = 2020;
            this->speed = 0;
      }

      Car(string brand, int year, int speed) {
            this->brand = brand;
            this->year = year;
            this->speed = speed;

            cout << "Car object created with custom parameters." << endl;
      }

      ~Car() {
            cout << "Car " << this->brand << " from " << this->year << " destroyed." << endl;
      }
};

int main() {
      Car c1;
      Car c2("Audi", 2023, 180);

      {
            Car c3("Lada", 1985, 90);
      }
}