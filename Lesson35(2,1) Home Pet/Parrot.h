#pragma once

#include "Pet.h"

class Parrot : public Pet
{
private:

	size_t flytime;
	size_t flyrange;

public:

	Parrot() : Pet(), flytime(0), flyrange(0) {}

	Parrot(std::string n, size_t a, size_t f, size_t r) :

		Pet(n,a),
		flytime(f),
		flyrange(r) {}

	const size_t& getFlytime() const { return flytime; }
	const size_t& getFlyrange() const { return flyrange; }

	void setFlytime(size_t& t) { flytime = t; }
	void setFlyrange(size_t& r) { flyrange = r; }

	void show() const
	{
		Pet::show();
		std::cout << "Flytime: " << flytime << " Flyrange: " << flyrange << "\n";
	}



};