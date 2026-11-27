#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _count(0), _next(0)
{
}


void	PhoneBook::addContact(const Contact &c)
{
	_contacts[_next] = c;
	_next = (_next + 1) % 8;
	if (_count < 8)
		_count++;
}

void	PhoneBook::displayContacts(void) const
{

	for (std::size_t i = 0; i < _count; i++)
		std::cout << i << " : " << _contacts[i].getFirstName() << std::endl;
}

/* void	PhoneBook::setContactAt(size_t i, std::string fn, std::string ln, std::string pn)
{
	contacts[i].setContact(fn, ln, pn);
}
 */
