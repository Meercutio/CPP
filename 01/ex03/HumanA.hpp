#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();
	void	attack();

private:
	HumanA();
	std::string		_name;
	const Weapon&	_weapon;
};

#endif
