#include "Dog.h"
#include "Cat.h"
#include "Parrot.h"
#include "Hamster.h"

int main()
{
    Pet* pets[4];

    pets[0] = new Dog("Rex");
    pets[1] = new Cat("Murzik");
    pets[2] = new Parrot("Kesha");
    pets[3] = new Hamster("Hamtaro");

    for (int i = 0; i < 4; i++)
    {
        pets[i]->Show();
        pets[i]->Type();
        pets[i]->Sound();
        std::cout << "-----\n";
    }

    for (int i = 0; i < 4; i++)
    {
        delete pets[i];
    }
}