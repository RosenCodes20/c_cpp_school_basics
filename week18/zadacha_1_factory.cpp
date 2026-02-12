#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void speak();
    ~Animal() = default;
};

class Dog : public Animal {
    void speak() override {
        cout << "Dog says WOOF!" << endl;
    };
};

class Cat : public Animal {
    void speak() override {
        cout << "Cat says: MEOW!" << endl;
    }
};