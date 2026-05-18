#pragma once

#include "Pet.h"

class Cat : public Pet
{
private:

	size_t speed;
	double jump;

public:

	Cat() : Pet(), speed(0), jump(0.0) {}

	Cat(std::string n, size_t a, size_t s, double j) :

		Pet(n, a),
		speed(s),
		jump(j < 0.0 ? 0.0 : j) {
	}

	const size_t& getSpeed() const { return speed; }
	const double& getJump() const { return jump; }

	void setSpeed(size_t& s) { speed = s; }
	void setJump(double& j)
	{
		if (j < 0.0) return;
		jump = j;
	}

	void show() const
	{
		Pet::show();
		std::cout << "Speed: " << speed << " Jump: " << jump << "\n";
	}
};
