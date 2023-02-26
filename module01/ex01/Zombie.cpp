#include "Zombie.hpp"

Zombie::Zombie() {}

void	Zombie::set_name(std::string zName) {
	_name = zName;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {}