#include <iostream>
#include <string>

using namespace std;
#include "animalClass.h"
#include "childAnimal.h"

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

int main()
{
    /*Q3.1 Part 1 and 2
    Animal a();
    a.speak();
    a.colorO();
    */
    /*Q3.2 Part 1 2 3
    Mammal b("bat", White);
    b.speak();
    Dog d("Tom", White, "Tim");
    d.speak();
    d.move();
    */

    /* Q3.3 Part 1 and 2
    Animal *animalPtr = new Dog("Lassie", White, "Andy");
    animalPtr->move();
    animalPtr->speak();
    delete animalPtr;
    animalPtr = NULL;
    */

    /* Q3.3 Part 3
    Dog dogi("Lassie", White, "Andy");
    Mammal *aniPtr = &dogi;
    Mammal &aniRef = dogi;
    Mammal aniVal = dogi;

    aniPtr->speak();
    aniRef.speak();
    aniVal.speak();
    */
    int choice = 0;
    Mammal *zoo[3];
    zoo[0] = new Dog("Lassie", Brown, "tom");
    zoo[1] = new Cat("Jon", White, "Jim");
    zoo[2] = new Lion("Olaf", Brown);
    cout << "Select the animal to send to Zoo :" << endl;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            zoo[choice - 1]->eat();
            zoo[choice - 1]->move();
            zoo[choice - 1]->speak();
            break;
        case 2:
            zoo[choice - 1]->eat();
            zoo[choice - 1]->move();
            zoo[choice - 1]->speak();
            break;
        case 3:
            zoo[choice - 1]->eat();
            zoo[choice - 1]->move();
            zoo[choice - 1]->speak();
            break;
        case 4:
            for (int i = 0; i < 3; i++)
            {
                zoo[i]->eat();
                zoo[i]->move();
                zoo[i]->speak();
            }
            break;
        case 5:
            cout << "Quitting program" << endl;
            break;
        default:
            cout << "Make a choice" << endl;
            break;
        }
        cout << "Select the animal to send to Zoo :" << endl;
        cin >> choice;
    }

    cout << "Program exiting ... " << endl;

    return 0;
}