#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor Clap called ." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Init constructor Clap called ." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap called ." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called ." << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called ." << std::endl;
	*this = other;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoint == 0)
	{
		std::cout << _name << " already dead." << std::endl;
		return ;
	}
	if (_energyPoint > 0)
	{
		--_energyPoint;
		std::cout << "ClapTrap " << _name << " attacks " << target << " , causing " << _attackDamage
				  << " point of damage ." << std::endl;
	}
	else
		std::cout << "Not enough mana." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint == 0)
		std::cout << _name << " already dead." << std::endl;
	if (_hitPoint > amount)
	{
		std::cout << "ClapTrap " << _name << " take " << amount << " points of damage ." << std::endl;
		_hitPoint -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " killed." << std::endl;
		_hitPoint = 0;
	}

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint == 0)
	{
		std::cout << _name << " already dead." << std::endl;
		return ;
	}
	if (_energyPoint > 0)
	{
		--_energyPoint;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " points of hp ." << std::endl;
		_hitPoint += amount;
	}
	else
		std::cout << "Not enough mana." << std::endl;
}
