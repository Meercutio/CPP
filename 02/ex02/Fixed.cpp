#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _fractBits;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fractBits));
}

float	Fixed::toFloat() const
{
	return ((float)_value / (float)(1 << _fractBits));
}

int		Fixed::toInt() const
{
	return (_value >> _fractBits);
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = fixed.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_value = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_value != fixed._value);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_value >= fixed._value);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_value <= fixed._value);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->_value > fixed._value);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->_value < fixed._value);
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed tmp;
	tmp = this->toFloat() + fixed.toFloat();
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed tmp;
	tmp = this->toFloat() - fixed.toFloat();
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed tmp;
	tmp = this->toFloat() * fixed.toFloat();
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed tmp;
	if (fixed.toFloat() == 0)
	{
		std::cerr << "Error: cannot divide by zero" << std::endl;
		exit(1);
	}
	tmp = this->toFloat() / fixed.toFloat();
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	++_value;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--(*this);
	return (tmp);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.getRawBits() >= fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() < fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

const Fixed	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	if (fixed1.getRawBits() >= fixed2.getRawBits())
		return (fixed1);
	else
		return (fixed2);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

