#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap a("OptimusPrime");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	a.attack("MegaTron");
	a.takeDamage(100);
	a.beRepaired(80);

	b.attack("GigaTron");
	b.takeDamage(100);
	b.beRepaired(80);

	c.attack("IkeaTron");
	c.takeDamage(100);
	c.beRepaired(80);

	ScavTrap aa("OptiProHumusPrimeBeef");
	ScavTrap bb(aa);
	ScavTrap cc;
	cc = bb;

	aa.attack("MoguTron");
	aa.takeDamage(100);
	aa.beRepaired(80);
	aa.guardGate();

	bb.attack("DjiganTron");
	bb.takeDamage(100);
	bb.beRepaired(80);
	bb.guardGate();

	cc.attack("IkeaStul");
	cc.takeDamage(100);
	cc.beRepaired(80);
	cc.guardGate();

	FragTrap aaa("Chertopoloch");
	FragTrap bbb(aaa);
	FragTrap ccc;
	ccc = bbb;

	aaa.attack("Megataburetka");
	aaa.takeDamage(100);
	aaa.beRepaired(80);
	aaa.highFivesGuys();

	bbb.attack("Metrandir");
	bbb.takeDamage(100);
	bbb.beRepaired(80);
	bbb.highFivesGuys();

	ccc.attack("TomReadle");
	ccc.takeDamage(100);
	ccc.beRepaired(80);
	ccc.highFivesGuys();
	return (0);
}
