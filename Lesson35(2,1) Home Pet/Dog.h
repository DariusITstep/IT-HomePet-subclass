#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
    Dog(const std::string& n) : Pet(n) {}

    void Sound() const override
    {
        std::cout << "Woof!\n";
    }

    void Type() const override
    {
        std::cout << "Dog\n";
    }
};