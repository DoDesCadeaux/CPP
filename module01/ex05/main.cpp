#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl	harlito;

		harlito.complain(argv[1]);
		return (0);
	}
	else
	{
		std::cerr << "Need 2 args" << std::endl;
		return (1);
	}
}