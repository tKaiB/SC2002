#include "childAnimal.h"
using namespace std;

int main()
{
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