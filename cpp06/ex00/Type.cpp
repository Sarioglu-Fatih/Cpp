#include "Convert.hpp"

bool	convertInf(const std::string &av)
{
	if (av == "-inff" || av == "+inff" || av == "+inf" || av == "-inf" || av == "nan" || av == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << av << (av == "nanf" || av == "+inff" || av == "-inff" ? "" : "f") << std::endl;
		if (av == "+inff" || av == "-inff" || av == "nanf")
			std::cout << "double : " << (av == "+inff" ? "+inf" : "") << (av == "-inff" ? "-inf" : "") << (av == "nanf" ? "nan" : "") << std::endl;
		else
			std::cout << "double : " << av << std::endl;
		return (true);
	}
	return (false);
}

bool	isInt(const std::string &av)
{
	int	i = 0;
	int	counter	= 0;

	if (av[0] == '+' || av[0] == '-')
		i++;
	while (isdigit(av[i]))
	{
		i++;
		counter++;
	}
	if (counter > 10 || av[i] != '\0')
		return (false);
	int	nb;
	std::istringstream	iss(av);
	iss >> nb;
	if (iss.fail())
		return (false);
	return (true);
}

bool	isChar(const std::string &av)
{
	if (!av[0])
		return (false);
	else if (av[1] != '\0')
		return (false);
	return (true);
}

bool	isFloat(const std::string &av)
{
	unsigned long	i = 0;
	size_t			flag = 0;

	if (av[i] == '+' || av[i] == '-')
		i++;
	while (isdigit(av[i]) || av[i] == '.')
	{
		if (av[i] == '.')
			flag++;
		i++;
	}
	if (av[i] != 'f' || i == 0 || flag != 1)
		return (false);
	float	nb;
	std::istringstream	iss(av);
	iss >> nb;
	if (av[i + 1] != '\0' || iss.fail())
		return (false);
	return (true);
}

bool	isDouble(const std::string &av)
{
	unsigned long	i = 0;
	size_t			flag = 0;

	if (av[i] == '+' || av[i] == '-')
		i++;
	while (isdigit(av[i]) || av[i] == '.')
	{
		if (av[i] == '.')
			flag++;
		i++;
	}
	if (av[i] != '\0' || flag != 1)
		return (false);
	double	nb;
	std::istringstream	iss(av);
	iss >> nb;
	if (iss.fail())
		return (false);
	return (true);
}