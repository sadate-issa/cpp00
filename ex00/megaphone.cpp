#include <iostream>
#include <cctype>

void	print_upper(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
	}
	std::cout << str;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
			print_upper(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
