#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook	book;

	book.setContactAt(0, "Ada", "Lovelace", "0102030405");
	book.setContactAt(1, "Grace", "Hopper", "0607080910");
	book.setContactAt(2, "Linus", "Torvalds", "0203040506");
	book.printAll();
	return 0;
}
