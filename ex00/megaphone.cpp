#include <iostream>
#include <cctype>
#include <string>

void	print_upper(char *str)
{
	for (size_t i = 0; i < str.size; i++)
	{
		str[i] = std::toupper(str[i]);
	}
	std::cout << str << std::endl;
}

int	main(int argc, char **argv)
{
	std::string str = argv[1];
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (size_t = 0; argv(argc - 1); argv++)
			std::cout << print_upper(argv[i]) << std::endl;
	}
	return (0);
}