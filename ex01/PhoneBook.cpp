#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::setContactAt(size_t i, std::string fn, std::string ln, std::string pn)
{
	contacts[i].setContact(fn, ln, pn);
}

void	PhoneBook::printAll(void)
{
	for (size_t i = 0; i < 3; i++)
		std::cout << i << " : " << contacts[i].getFirstName() << " " << contacts[i].getLastName()
			<< " - " << contacts[i].getPhoneNumber() << std::endl;
}
