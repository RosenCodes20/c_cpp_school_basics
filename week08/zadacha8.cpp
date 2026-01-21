#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;

    public:
        void setLength(double l) {
            if (l > 0) {
                this -> length = l;
            } else {
                this -> length = 1;
                cout << "The length is negative or zero!" << endl;
            }
        }

        void setWidth(double w) {
            if (w > 0) {
                this -> width = w;
            } else {
                this -> width = 1;
                cout << "The width is negative or zero!" << endl;
            }
        }

        double getLength() const {
            return this -> length;
        }

        double getWidth() const {
            return this -> width;
        }

        double calculateArea() {
            return this->length * this->width;
        }

        double calculatePerimeter() {
            return 2 * (this -> width + this -> length);
        }
};

int main() {
    Rectangle r1;

    r1.setLength(10);
    r1.setWidth(5);

    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;

    cout << "Rectangle area: " << r1.calculateArea() << endl;
    cout << "Rectangle perimeter: " << r1.calculatePerimeter() << endl;

    // test code za set length za otricatelno chislo
    r1.setLength(-5);
    cout << "After the change length with negative value: " << r1.getLength() << endl;

    // test code za set width za otricatelno chislo
    r1.setWidth(-5);
    cout << "After the change width with negative value: " << r1.getWidth() << endl;
}