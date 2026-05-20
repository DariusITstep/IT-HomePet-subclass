#pragma once
#include "Pet.h"

class Hamster : public Pet
{
public:
    Hamster(const std::string& n) : Pet(n) {}

    void Sound() const override
    {
        std::cout << "Squeak!\n";
    }

    void Type() const override
    {
        std::cout << "Hamster\n";
    }
};