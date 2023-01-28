#include "../includes/PhoneBook.hpp"

int main(void)
{
	std::string input;
	unsigned int contactID = 0;

	PhoneBook phone;
	while (31)
	{
		std::cout << "Add Search or Exit ?" << std::endl;
		std::getline(std::cin, input);
		system("clear");
		std::cin.clear();
		if (input == "ADD" && contactID < 8)
		{
			phone.addContact(contactID);
			contactID++;
		}
		else if ((input == "SEARCH" || input == "s") && contactID > 0)
			phone.displayContacts();
		else if (input == "EXIT" || input == "exit")
			exit(0);
	}
	return (0);
}