#include "Zombie.hpp"

int main()
{
	Zombie	*zombie1;

	zombie1 = newZombie("Ilya");
	zombie1->announce();
	Zombie	zombie("Ivan");
	zombie.announce();
	randomChump("Vasia");
	delete zombie1;

	return (0);
}
