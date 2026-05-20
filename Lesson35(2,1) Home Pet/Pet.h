#pragma once
#include <iostream>
#include <string>

class Pet
{
protected:

    std::string name;

public:

    Pet(const std::string& n) : name(n) {}

    virtual void Sound() const = 0;
    virtual void Show() const
    {
        std::cout << "Name: " << name << "\n";
    }
    virtual void Type() const = 0;

    virtual ~Pet() = default;
};