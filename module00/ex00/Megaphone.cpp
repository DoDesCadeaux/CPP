#include <iostream>

int main(int argc, char **av)
{
	if (argc >= 2)
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++) {
				if (av[i][j] >= 97 && av[i][j] <= 122)
					av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}