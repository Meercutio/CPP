#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap &other);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &other);

	void	guardGate();
};

#endif
