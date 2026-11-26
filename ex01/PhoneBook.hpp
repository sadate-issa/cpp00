#ifndef 	PHONEBOOK_HPP
# define	PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstddef>

class PhoneBook
{
public:
	PhoneBook(void);
	void	setContactAt(size_t i, std::string fn, std::string ln, std::string pn);
	void	addContact(const Contact &newContact);
	void	displayContacts(void);

private:
	Contact			_contacts[8];
	std::size_t		_count;
	std::size_t		_next;
};

#endif
