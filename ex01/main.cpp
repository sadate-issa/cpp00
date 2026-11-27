#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	book;
	Contact		c;

	book.displayContacts();
	c.setFirstName("Ada");
	book.addContact(c);
	c.setFirstName("Grace");
	book.addContact(c);
	c.setFirstName("Linus");
	book.addContact(c);
	c.setFirstName("Raissa");
	book.addContact(c);
	c.setFirstName("Sofiane");
	book.addContact(c);
	c.setFirstName("Arun");
	book.addContact(c);
	c.setFirstName("Ambre");
	book.addContact(c);
	c.setFirstName("Soubatra");
	book.addContact(c);
	c.setFirstName("Alex");
	book.addContact(c);
	c.setFirstName("Sadate");
	book.addContact(c);
	book.displayContacts();
	return 0;
}
