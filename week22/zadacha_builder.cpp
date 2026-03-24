#include <iostream>

using namespace std;

class Pizza
{
public:
    string dough;
    string sauce;
    string toppings;

    void showPizza()
    {
        cout << "Pizza with:\n";
        cout << "- Dough: " << dough << "\n";
        cout << "- Sauce: " << sauce << "\n";
        cout << "- Toppings: " << toppings << "\n\n";
    }
};

class PizzaBuilder
{
public:
    virtual void setDough() = 0;
    virtual void setSauce() = 0;
    virtual void setToppings() = 0;
    virtual Pizza getResult() = 0;

    virtual ~PizzaBuilder() {}
};

class MargheritaBuilder : public PizzaBuilder
{
private:
    Pizza pizza;
public:
    void setDough() override
    {
        pizza.dough = "Thin dough";
    }
    void setSauce() override
    {
        pizza.sauce = "Tomato sauce";
    }
    void setToppings() override
    {
        pizza.toppings = "Mozzarella + Basil";
    }

    Pizza getResult() override
    {
        return pizza;
    }
};

class PepperoniBuilder : public PizzaBuilder
{
private:
    Pizza pizza;
public:
    void setDough() override
    {
        pizza.dough = "Regular dough";
    }
    void setSauce() override
    {
        pizza.sauce = "Spicy tomato sauce";
    }
    void setToppings() override
    {
        pizza.toppings = "Pepperoni slices";
    }
    Pizza getResult() override
    {
        return pizza;
    }
};

class Chef
{
public:

    void makePizza(PizzaBuilder& builder)
    {
        builder.setDough();
        builder.setSauce();
        builder.setToppings();
    }
};

int main()
{
    Chef cook;
    MargheritaBuilder margherita;

    cook.makePizza(margherita);
    Pizza pizza1 = margherita.getResult();
    pizza1.showPizza();

    PepperoniBuilder pepperoni;

    cook.makePizza(pepperoni);
    Pizza pizza2 = pepperoni.getResult();
    pizza2.showPizza();
}