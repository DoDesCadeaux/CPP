#include "Zombie.hpp"

int main(void)
{
	Zombie *z;

	randomChump("Zombie pas beau");
	z = newZombie("Zombie pas gentil");
	z->announce();
	delete(z);
	return (0);
}