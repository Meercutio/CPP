#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor Frag called!" << std::endl;
	_name = "Default";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "Init constructor Frag called!" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Assignation operator Frag called!" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Copy constructor Frag called!" << std::endl;
	*this = other;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Frag called!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " give high five." << std::endl;
}