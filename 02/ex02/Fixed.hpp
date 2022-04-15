#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed	&operator=(const Fixed &fixed);
	bool	operator>(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;
	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);
	static			Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static			Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const	Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
	static const	Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
private:
	int					_value;
	static const int	_fractBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
