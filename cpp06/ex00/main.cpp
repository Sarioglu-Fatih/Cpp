#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cout << "Error : expected one argument" << std::endl;
	return (0);
}