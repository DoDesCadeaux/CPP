#include "sandbox.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << PURPLE << "CONSTRUCTOR CALLED" << NO_COLOUR << std::endl;
	std::cout << GREEN << "this->a1 : " << this->a1 << NO_COLOUR << std::endl;
	std::cout << GREEN << "this->a2 : " << this->a2 << NO_COLOUR << std::endl;
	std::cout << GREEN << "this->a3 : " << this->a3 << NO_COLOUR << std::endl;
}

Sample::~Sample() {
	std::cout << "DESTRUCTOR CALLED" << std::endl;
}

int main(void)
{
	Sample echantillon('B', 42, 6.9);
	return (0);
}