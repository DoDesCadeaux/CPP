#include "sandbox.hpp"

class Student {
private:
	std::string _login;

public:
	Student(std::string const & login) : _login(login) {}

	std::string	&getLoginRef()
	{
		return (_login);
	}

	std::string const &getLoginConstRef() const
	{
		return (_login);
	}

	std::string *getLoginPtr()
	{
		return &(_login);
	}

	std::string const *getLoginConstPtr() const
	{
		return &(_login);
	}
};

int main(void)
{
	Student	dorian = Student("dduraku");
	Student const gena = Student("gdemoor");

	std::cout << dorian.getLoginConstRef() << "   " << gena.getLoginConstRef() << std::endl;
	std::cout << *(dorian.getLoginConstPtr()) << "   " << *(gena.getLoginConstPtr()) << std::endl;

	dorian.getLoginRef() = "ddorian";
	std::cout << dorian.getLoginConstRef() << std::endl;

	*(dorian.getLoginPtr()) = "dbg";
	std::cout << *(dorian.getLoginConstPtr()) << std::endl;
	return (0);
}