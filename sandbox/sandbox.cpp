#include "sandbox.hpp"

Sample::Sample() {
	std::cout << GREEN <<"Constructor Called" << NO_COLOUR << std::endl;
}
Sample::~Sample() {
	std::cout << RED << "Destructor Called" << NO_COLOUR << std::endl;
}

void Sample::setPrivateValue() {
	int value_to_set;

	std::cout << "Set your value : " << std::endl;
	std::cin >> value_to_set;
	std::cin.clear();
	_private_value = value_to_set;
}

int Sample::getPrivateValue() {
	return (_private_value);
}

int main(void)
{
	Sample test;

	test.setPrivateValue();
	test.getPrivateValue();

	std::cout << "Your private value : " << test.getPrivateValue() << std::endl;
	return (0);
}