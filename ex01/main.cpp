int main(void)
{
	Contact book[3];
	book[0].firstName = "Ada";
	book[0].lastName = "Lovelace";
	book[0].nickname = "Countess";
	book[0].phoneNumber = "0102030405";
	book[1].firstName = "Grace";
	book[1].lastName = "Hopper";
	book[1].nickname = "Amazing";
	book[1].phoneNumber = "0607080910";
	book[2].firstName = "Linus";
	book[2].lastName = "Torvalds";
	book[2].nickname = "Penguin";
	book[2].phoneNumber = "0203040506";

	for (size_t i = 0; i < 3; i++)
		std::cout << i << " : " << book[i].firstName << book[i].lastName << " ("  << book[i].nickname << ") - " << book[i].phoneNumber << std::endl;
	return 0;
}
