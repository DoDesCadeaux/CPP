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
		std::cout << "Invalid type. A number value is needed" << std::endl;
	}
	if (contactID < 8 && contactID >= 0)
		contacts[contactID].getInfo(contactID);
	else
		std::cout << "Index should be between 0 and 7" << std::endl;
}

void PhoneBook::displayContacts() {
	std::string firstname;
	std::string	lastname;
	std::string	nickname;
	int i;
	int	contactID;

	i = 0;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |Firstname | Lastname | Nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (i < 8)
	{
		firstname = contacts[i].getFirstName();
		lastname = contacts[i].getLastName();
		nickname = contacts[i].getNickName();
		contactID = contacts[i].getID();
		if (!firstname.empty())
		{
			firstname = truncateInfo(firstname);
			lastname = truncateInfo(lastname);
			nickname = truncateInfo(nickname);
			std::cout << "|    " << contactID
				<< "     |" << firstname << "|"
				<< lastname << "|" << nickname << "|" << std::endl;
			std::cout << "+----------+----------+----------+----------+" << std::endl;
		}
		i++;
	}
	this->searchContactById();
	return;
}
