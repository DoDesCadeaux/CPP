#include "Zombie.hpp"

int main(void)
{
	Zombie *z;

	z = zombieHorde(12, "Aziz");
	delete [] z;
	return (0);
}