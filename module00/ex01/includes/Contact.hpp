#include <iostream>
#include <string>

#define BLACK		"\033[0;30m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"
#define WHITE		"\033[0;37m"
#define NO_COLOR	"\033[0m"


class Contact
{
private:
	unsigned int	_contactID;
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_phoneNumber;
	std::string		_darkestSecret;
public:
	void			setID(unsigned int contactIdToSet);
	void 			setFirstName();
	void			setLastName();
	void			setNickname();
	void			setPhoneNr();
	void			setSecret();

	void			getInfo(unsigned int contactID);
	unsigned int	getID();
	std::string 	getFirstName();
	std::string 	getLastName();
	std::string		getNickName();
};
