#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

class Conversion
{
public:
	Conversion(const char *input);
	Conversion(const Conversion &other);
	~Conversion();
	Conversion &operator=(const Conversion &other);

	char	getChar() const;
	int		getInt() const;
	float	getFloat() const;
	double	getDouble() const;

	class NonDisplayableCharacters : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class ConversionIsImpossible : public std::exception
	{
	public:
		const char *what() const throw();
	};

private:
	std::string	_input;
};

std::ostream &operator<<(std::ostream &out, const Conversion &conversion);

#endif
