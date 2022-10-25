#include <iostream>
#include <string>

using namespace std;

enum COLOR
{
    Green,
    Blue,
    White,
    Black,
    Brown
};

class Animal
{
private:
    string _name;
    COLOR _color;

public:
    Animal() : _name("unknown")
    {
        cout << "constructing Animal object " << _name << endl;
    }
    Animal(string n, COLOR c) : _name(n), _color(c)
    {
        cout << "constructing Animal object " << _name << endl;
    }
    ~Animal()
    {
        cout << "destructing Animal object " << _name << endl;
    }
    virtual void speak()
    {
        cout << "Animal speaks " << endl;
    }
    void colorO() const
    {
        cout << "Color of " << _name << " is " << _color << endl;
    }
    virtual void move() = 0;
};

class Mammal : public Animal
{
public:
    Mammal(string n, COLOR c) : Animal(n, c)
    {

        cout << "constructing Mammal object " << n << endl;
    }
    ~Mammal()
    {
        cout << "destructing Mammal object " << endl;
    }
    void eat() const
    {
        cout << "Mammal eat " << endl;
    }
    void move()
    {
        cout << "Mammal moving " << endl;
    }
};
