#include "Zombie.hpp"

int main()
{
	Zombie	*tmp;
	int 	N = 5;

	tmp = zombieHorde(N, "Danya");
	for (int i = 0; i < N; i++)
		tmp[i].announce();

	delete []tmp;

	return (0);
}
