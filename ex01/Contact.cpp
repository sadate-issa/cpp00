#include "Contact.hpp"

Contact::Contact(void)
{
}


void	Contact::setFirstName(std::string fn)
{
	_firstName = fn;
}

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}


/* std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
} */

/*
void		Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	_firstName = fn;
	_lastName = ln;
	_nickName = nn;
	_phoneNumber = pn;
	_darkestSecret = ds;
}
*/
