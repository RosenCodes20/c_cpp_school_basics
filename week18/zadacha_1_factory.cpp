#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() = default;
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

class AnimalFactory {
    static std::unique_ptr<Animal> create(const std::string& name) {
        if (name == "Dog") {
            return make_unique<Dog>();
        } else if (name == "Cat") {
            return make_unique<Cat>();
        }

        return nullptr;
    }
};