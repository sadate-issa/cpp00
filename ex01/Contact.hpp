#ifndef 	CONTACT_HPP
# define	CONTACT_HPP

# include <string>

class Contact
{
public:
	Contact(void);
	void	setFirstName(std::string fn);

	std::string	getFirstName(void) const;


private:
	std::string _firstName;
};

#endif

/*
	void	setLastName(std::string ln) const;
	void	setNickName(std::string nn) const;
	void	setPhoneNumber(std::string pn) const;
	void	setDarkestSecret(std::string ds) const;

	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
*/
