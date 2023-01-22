#include "sandbox.hpp"

Sample::Sample() {
	std::cout << GREEN <<"Constructor Called" << NO_COLOUR << std::endl;
}
Sample::~Sample() {
	std::cout << RED << "Destructor Called" << NO_COLOUR << std::endl;
}

void Sample::setPrivateValue() {
	int value_to_set;

	std::cout << "Pick a number > 0" << std::endl;
	std::cin >> value_to_set;
	if (value_to_set >= 0)
		_private_value = value_to_set;
	else
	{
		_private_value = -1;
		std::cout << RED << "Value should be greater than 0" << NO_COLOUR << std::endl;
	}
}

int Sample::getPrivateValue() {
	if (_private_value >= 0)
		return (_private_value);
	else
		return (-1);
}

int main(void)
{
	Sample SampleOne;

	SampleOne.setPrivateValue();
	SampleOne.getPrivateValue();

	if (SampleOne.getPrivateValue() >= 0)
		std::cout << GREEN << "Private Value : " << SampleOne.getPrivateValue() << NO_COLOUR << std::endl;
	else
		return (0);
}