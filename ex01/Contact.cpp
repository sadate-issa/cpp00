#include "Contact.hpp"

void	Contact::setContact(std::string fn, std::string ln, std::string pn)
{
	firstName = fn;
	lastName = ln;
	phoneNumber = pn;
}

std::string	Contact::getFirstName(void)
{
	return (firstName);
}

std::string	Contact::getLastName(void)
{
	return (lastName);
}

std::string	Contact::getPhoneNumber(void)
{
	return (phoneNumber);
}


