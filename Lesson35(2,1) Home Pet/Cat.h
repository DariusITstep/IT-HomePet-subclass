#pragma once
#include "Pet.h"

class Cat : public Pet
{
public:
    Cat(const std::string& n) : Pet(n) {}

    void Sound() const override
    {
        std::cout << "Meow!\n";
    }

    void Type() const override
    {
        std::cout << "Cat\n";
    }
};