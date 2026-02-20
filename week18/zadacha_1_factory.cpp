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
public:
    void speak() override {
        cout << "Dog says WOOF!" << endl;
    };
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat says: MEOW!" << endl;
    }
};

class AnimalFactory {
public:
    static std::unique_ptr<Animal> create(const std::string& name) {
        if (name == "Dog") {
            return make_unique<Dog>();
        } else if (name == "Cat") {
            return make_unique<Cat>();
        }

        return nullptr;
    }
};

int main() {
    AnimalFactory animal_factory;

    std::unique_ptr<Animal> dog = animal_factory.create("Dog");
    unique_ptr<Animal> cat = animal_factory.create("Cat");

    dog->speak();
    cat->speak();
}