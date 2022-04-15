#include "Conversion.hpp"

Conversion::Conversion(const char *input) : _input(input) {}

Conversion::Conversion(const Conversion &other)
{
	if (this != &other)
		_input = other._input;
}

Conversion::~Conversion() {}

Conversion	&Conversion::operator=(const Conversion &other)
{
	_input = other._input;
	return (*this);
}

char	Conversion::getChar() const
{
	char	res;

	try
	{
		res = static_cast<char>(std::stoi(_input));
	}
	catch (const std::exception &e)
	{
		throw Conversion::ConversionIsImpossible();
	}
	if (res < 32 || res > 126)
		throw Conversion::NonDisplayableCharacters();
	return (res);
}

int	Conversion::getInt() const
{
	int	res = 0;

	try
	{
		res = std::stoi(_input);
	}
	catch (const std::exception &e)
	{
		throw Conversion::ConversionIsImpossible();
	}
	return (res);
}

float	Conversion::getFloat() const
{
	float	res = 0;
	try
	{
		res = std::stof(_input);
	}
	catch (const std::exception &e)
	{
		throw Conversion::ConversionIsImpossible();
	}
	return (res);
}

double	Conversion::getDouble() const
{
	double	res = 0;
	try
	{
		res = std::stod(_input);
	}
	catch (const std::exception &e)
	{
		throw Conversion::ConversionIsImpossible();
	}
	return (res);
}

const char	*Conversion::NonDisplayableCharacters::what() const throw()
{
	return ("Non displayable");
}

const char	*Conversion::ConversionIsImpossible::what() const throw()
{
	return ("impossible");
}

std::ostream	&operator<<(std::ostream &out, const Conversion &conversion)
{
	try
	{
		out << "char: " << conversion.getChar() << std::endl;
	}
	catch (const std::exception &e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		out << "int: " << conversion.getInt() << std::endl;
	}
	catch (const std::exception &e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		out << "float: " << conversion.getFloat();
		if (conversion.getFloat() - static_cast<int>(conversion.getFloat()) == 0)
			out << ".0";
		out << "f" << std::endl;
	}
	catch (const std::exception &e)
	{
		out << e.what() << std::endl;
	}
	try
	{
		out << "double: " << conversion.getDouble();
		if (conversion.getDouble() - static_cast<int>(conversion.getDouble()) == 0)
			out << ".0";
		out << std::endl;
	}
	catch (const std::exception &e)
	{
		out << e.what() << std::endl;
	}
	return (out);
}
