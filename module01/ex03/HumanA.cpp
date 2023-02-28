#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const &weaponRef) : _name(name), _weaponARef(weaponRef) {
	std::cout << this->_name << "'s constructor called and sets " << this->_weaponARef.get_type() << std::endl;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weaponARef.get_type() << std::endl;
}

HumanA::~HumanA() {}
