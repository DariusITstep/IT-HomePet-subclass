#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"

int main()
{
	Cat cat1("Sinder", 7, 25, 2.2);
	Dog dog1("Bobik", 10, 3, 0.1);
	Parrot par1("Kesha", 7, 10, 3);

	cat1.show();
	std::cout << "\n";
	dog1.show();
	std::cout << "\n";
	par1.show();
	std::cout << "\n";

	if (cat1 == dog1) std::cout << "YES\n";
	else std::cout << "NO\n";
	std::cout << "\n";
	if (cat1 == par1) std::cout << "YES\n";
	else std::cout << "NO\n";

	return 0;
}