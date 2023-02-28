#include "Weapon.hpp"

class HumanB {
private:
	std::string	_name;
	Weapon		*_weaponPtr;

public:
	void	attack();
	void	setWeapon(Weapon &weaponName);
	HumanB(std::string name);
	~HumanB();
};