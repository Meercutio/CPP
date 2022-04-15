#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("OptimusPrime");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	a.attack("MegaTron");
	a.takeDamage(8);
	a.beRepaired(2);

	b.attack("GigaTron");
	b.takeDamage(11);
	b.beRepaired(2);

	c.attack("IkeaTron");
	c.takeDamage(2);
	c.beRepaired(1);

	return (0);
}
