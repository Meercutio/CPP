#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string &type) : _type(type) {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string const &type)
{
	_type = type;
}
