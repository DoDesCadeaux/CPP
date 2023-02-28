#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		HumanB jim("Jim");
		jim.attack();
	}
	{
		Weapon epee("Katana");

		HumanB berangere("Berangère");
		berangere.setWeapon(epee);
		berangere.attack();
		epee.setType("Sabre laser");
		berangere.attack();
	}
	return (0);
}
