#include "../includes/PhoneBook.hpp"

void PhoneBook::addContact(int contactID) {
	contacts[contactID].setID(contactID);
	contacts[contactID].setFirstName();
	contacts[contactID].setLastName();
	contacts[contactID].setNickname();
	contacts[contactID].setPhoneNr();
	contacts[contactID].setSecret();
}

void	PhoneBook::searchContactById() {
	int contactID;
	std::string temp;

	std::cout << "What is your contact ID ?" << std::endl;
	std::getline(std::cin, temp);
	system("clear");
	try
	{
		contactID = std::stoi(temp);
	}
	catch (const std::invalid_argument&)
	{
		std::cout << "Invalid type we need a number value" << std::endl;
	}
	if (contactID < 8 && contactID >= 0)
		contacts[contactID].getInfo(contactID);
	else
		std::cout << "Index should be between 7 and 0" << std::endl;
}

void PhoneBook::displayContacts() {
	unsigned int	contactID;
	std::string		firstName;
	std::string 	lastName;
	std::string 	truncatedString;

	contactID = 0;
	while (contactID < 8)
	{
		lastName = this->contacts[contactID].getLastName();
		firstName = this->contacts[contactID].getFirstName();
		if (firstName.size() > 10)
			truncatedString = firstName.substr(0, 9) + ".";
		std::cout << truncatedString << "\n";
		if (!this->contacts[contactID].getFirstName().empty())
		{
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			if (firstName.size() <= 10)
				std::cout << "|" << std::setw(10 - (firstName.size() / 2)) << firstName;
			else
				std::cout << "|" << std::setw(10) << truncatedString;
			std::cout <<  std::setw(10) << lastName << "|\n";
			std::cout << "+----------+----------+----------+----------+" << std::endl;
			contactID++;
		}
		else
			contactID = 8;
	}
	this->searchContactById();
	return;
}