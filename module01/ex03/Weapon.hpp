#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
private:
	std::string			_type;

public:
	std::string	const	&get_type() const;
	void	setType(std::string type);
	Weapon(std::string type);
	~Weapon();

};

#endif
