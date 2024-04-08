#include "Convert.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {(void)cpy;}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &cpy)
{
	(void)cpy;
	return (*this);
}

void	ScalarConverter::convert(const std::string &av)
{
	if (convertInf(av))
		return ;
	else if (isInt(av))
		printInt(atoi(av.c_str()));
	else if (isChar(av))
		printChar(av[0]);
	else if (isFloat(av))
	{
		float	nb;
		std::istringstream	iss(av);
		iss >> nb;
		printFloat(nb);
	}
	else if (isDouble(av))
	{
		double	nb;
		std::istringstream	iss(av);
		iss >> nb;
		printDouble(nb);
	}
	else
		std::cout << "Conversion error" << std::endl;
}

void	ScalarConverter::printDouble(double nb)
{
	char	c = static_cast<char>(nb);
	int		inb = static_cast<int>(nb);
	float	f = static_cast<float>(nb);

	std::cout << "char: " << (nb < 0 || nb >= 128 ? "impossible" : (nb < 33 || nb >= 127 ? "Non displayable" : "'" + std::string(1, c) + "'")) << std::endl;
	std::cout << "int: ";
	if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << inb << std::endl;
	std::cout << "float: ";
	if (nb < std::numeric_limits<float>::min())
		std::cout << "-inff" << std::endl;
	else if (nb > std::numeric_limits<float>::max())
		std::cout << "+inff" << std::endl;
	else
		std::cout << f << "f" << std::endl;
	std::cout << "double: " << nb << std::endl;
}

void	ScalarConverter::printFloat(float nb)
{
	char	c = static_cast<char>(nb);
	long	n = static_cast<long>(nb);

	std::cout << "char: " << (nb < 0 || nb > 127 ? "impossible" : (nb < 33 || nb > 126 ? "Non displayable" : "'" + std::string(1, c) + "'")) << std::endl;
	if (nb < std::numeric_limits<int>::min() || nb > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << n << std::endl;
	std::cout << "float: " << nb << "f" << std::endl;
		
	std::cout << "double: " << nb << std::endl;
}

void	ScalarConverter::printChar(char c)
{
	int	nb = static_cast<int>(c);

	std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << nb << ".0f" << std::endl;
	std::cout << "double: " << nb << ".0" << std::endl;
}

void	ScalarConverter::printInt(int nb)
{
	const char	c = static_cast<char>(nb);

	std::cout << "char: " << (nb < 0 || nb > 127 ? "impossible" : (nb < 33 || nb == 127 ? "Non displayable" : "'" + std::string(1, c) + "'")) <<  std::endl;
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << nb << ".0f" << std::endl;
	std::cout << "double: " << nb << ".0" << std::endl;
}