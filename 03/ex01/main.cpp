#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap *A;
	A = new ScavTrap();
	delete A;

	return (0);
}
