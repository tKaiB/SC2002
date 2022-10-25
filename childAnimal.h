#include <string>
#include <iostream>
#include "animalClass.h"

using namespace std;

class Dog : public Mammal
{
public:
    Dog(string n, COLOR c, string o) : Mammal(n, c)
    {
        _owner = o;
        cout << "constructing Dog object " << n << " The Owner is " << _owner << endl;
    }
    ~Dog()
    {
        cout << "destructing Dog Object" << endl;
    }
    void speak()
    {
        cout << "Woof!" << endl;
    }
    void move()
    {
        cout << "Dog is moving" << endl;
    }

private:
    string _owner;
};

class Cat : public Mammal
{
public:
    Cat(string n, COLOR c, string o) : Mammal(n, c)
    {
    }
    ~Cat()
    {
        cout << "Destructing Cat Object" << endl;
    }
    void speak()
    {
        cout << "Meow!" << endl;
    }
    void move()
    {
        cout << "Cat is moving" << endl;
    }
};
class Lion : public Mammal
{
public:
    Lion(string n, COLOR c) : Mammal(n, c)
    {
    }
    ~Lion()
    {
        cout << "Destructing Lion Object" << endl;
    }
    void speak()
    {
        cout << "Roar!" << endl;
    }
    void move()
    {
        cout << "Lion is moving" << endl;
    }
};