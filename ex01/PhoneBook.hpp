#ifndef 	PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
	void	setContactAt(size_t i, std::string fn, std::string ln, std::string pn);
	void	printAll(void);

private:
	Contact	contacts[3];
};


#endif
