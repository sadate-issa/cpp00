#ifndef 	CONTACT_HPP
# define	CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
public:
	Contact(void);
	void		setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
