#pragma once
#include "Pet.h"

class Parrot : public Pet
{
public:
    Parrot(const std::string& n) : Pet(n) {}

    void Sound() const override
    {
        std::cout << "Chirp!\n";
    }

    void Type() const override
    {
        std::cout << "Parrot\n";
    }
};