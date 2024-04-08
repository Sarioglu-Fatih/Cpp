#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>

bool	convertInf(const std::string &av);
bool	isInt(const std::string &av);
bool	isChar(const std::string &av);
bool	isFloat(const std::string &av);
bool	isDouble(const std::string &av);

class	ScalarConverter
{
	public :
		static void	convert(const std::string &av);
		static void	printInt(int nb);
		static void	printChar(char c);
		static void	printFloat(float nb);
		static void	printDouble(double nb);

	private :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter	&operator=(const ScalarConverter &cpy);
};

#endif