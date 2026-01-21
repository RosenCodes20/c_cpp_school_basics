#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Point {
    private:
        int x;
        int y;

    public:
        Point(int x, int y): x(x), y(y) {

        }

        int getX() const {
            return this->x;
        }

        int getY() const {
            return this->y;
        }

        Point operator+(const Point& other) const {
            return Point(this->x + other.x, this->y + other.y);
        }

    
};

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "(" << p.getX() << ", " << p.getY() << ")";

    return os;
}

void print_message(const std::string& msg) { 
    std::cout << msg << std::endl; 
}


int main() {
    // 1
    Point p1(10, 5);
    Point p2(2, 8);

    Point p3 = p1 + p2;

    cout << "p1x = " << p1.getX() << " p1y = " << p1.getY() << endl;
    cout << "p2x = " << p2.getX() << " p2y = " << p2.getY() << endl;
    cout << "p3 = p1 + p2 = " << p3.getX() << "x " << p3.getY() << "y" << endl;
 
    // 2
    cout << "p e: " << p3 << endl;

    // 3
    std::unique_ptr<string> u_ptr = std::make_unique<std::string>("Hello World");

    print_message(u_ptr->c_str());

    /*
    Slednoto NE e pozvoleno:

        std::unique_ptr<std::string> u_ptr_copy = u_ptr;

    Prichina:
        std::unique_ptr pozvolqva samo edin sobstvenik na pametta.
        Kopiraneto e zabraveno, za da se izbegne dvoino osvobojdavane.
        Pozvoleno e samo premestvane (std::move).
    */

    // 4

    std::shared_ptr<int> s_ptr1 = std::make_shared<int>(42);
    std::shared_ptr<int> s_ptr2 = s_ptr1;

    cout << s_ptr1.use_count() << endl;
    cout << s_ptr2.use_count() << endl;

    /*
    Kakvo se sluchva s pametta:
        Pametta shte se osvobodi, kogato i dvata shared_ptr-a
        (s_ptr1 i s_ptr2) izleznat ot obhvat i use_count stane 0 :)
    */
}
