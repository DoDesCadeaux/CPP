#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string zName) {
	_name = zName;
}
Zombie::Zombie() {}
Zombie::~Zombie() {
	std::cout << _name << "'s Destructor called" << std::endl;
}
