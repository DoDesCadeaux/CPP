#include "Weapon.hpp"
class HumanA {
private:
	std::string		_name;
	Weapon const	&_weaponARef;

public:
	void	attack();
	HumanA(std::string name, Weapon const &weaponRef);
	~HumanA();
};
