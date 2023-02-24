#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
private:
	std::string	_name;
public:
	Zombie() {}
	void	set_name(std::string zName)
	{
		_name = zName;
	}
	void	announce()
	{
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	~Zombie() {
		std::cout << _name << "'s Destructor called" << std::endl;
	}
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
