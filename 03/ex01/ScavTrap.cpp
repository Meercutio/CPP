#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor Scav called!" << std::endl;
	_name = "Default";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "Init constructor Scav called!" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Assignation operator Scav called!" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "Copy constructor Scav called!" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Scav called!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "is now in Gate keeper." << std::endl;
}
