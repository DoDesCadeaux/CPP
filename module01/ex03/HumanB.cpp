#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::setWeapon(Weapon &weaponName) {
	this->_weaponPtr = &weaponName;
}

void HumanB::attack() {
	if (this->_weaponPtr)
		std::cout << this->_name << " attacks with their " << this->_weaponPtr->get_type() << std::endl;
	else
		std::cout << this->_name << " fights with his hands" << std::endl;
}

HumanB::~HumanB() {}