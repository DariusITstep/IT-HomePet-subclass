#pragma once
#include <string>
#include <iostream>

class Pet
{
protected:

	std::string name;
	size_t age;

	static constexpr short LEN = 20;

public:

	Pet() : Pet("Empty", 0) {}

	Pet(std::string n, size_t a) : 
		
		name((n.empty() || n.length() > LEN) ? "Empty" : n), 
		age(a) {}

	const std::string& getName() const { return name; }
	const size_t& getAge() const { return age; }

	void setName(std::string& n)
	{
		if (n.empty() || n.length() > LEN) return;
		name = n;
	}
	void setAge(size_t a) { age = a; }

	void show() const
	{
		std::cout << "Pet name: " << name << " Age: " << age << "\n";
	}

	bool operator==(const Pet& other) const
	{
		return age == other.age;
	}

};