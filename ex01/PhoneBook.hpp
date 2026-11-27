#ifndef 	PHONEBOOK_HPP
# define	PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstddef>
# include <iostream>

class PhoneBook
{
public:
	PhoneBook(void);
	void	addContact(const Contact &c);
	void	displayContacts(void) const;

private:
	Contact			_contacts[8];
	std::size_t		_count;
	std::size_t		_next;
};

#endif



//	void	setContactAt(size_t i, std::string fn, std::string ln, std::string pn);
