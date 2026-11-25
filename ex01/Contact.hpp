#ifndef 	CONTACT_HPP
# define	CONTACT_HPP

#include <string>

class Contact
{
public:
	void		setContact(std::string fn, std::string ln, std::string pn);
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getPhoneNumber(void);

private:
	std::string firstName;
	std::string lasttName;
	std::string phoneNumber;
};

#endif
