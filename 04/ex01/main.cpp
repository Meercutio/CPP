#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongOne.hpp"

#define amount 4

int	main()
{
	Animal	*staya[amount];
	for (int i = 0; i < amount; i++)
	{
		if (i % 2)
		{
			staya[i] = new Cat();
			staya[i]->makeSound();
			staya[i]->printIdea(i);
		}
		else
		{
			staya[i] = new Dog();
			staya[i]->makeSound();
			staya[i]->printIdea(i);
		}
	}
	for (int i = 0; i < amount; i++)
		delete staya[i];
	return 0;
}
