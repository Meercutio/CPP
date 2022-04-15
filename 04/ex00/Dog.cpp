#include "Dog.hpp"

Dog::Dog()
{
	type = ("Dog");
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const std::string &o_type)
{
	type = o_type;
}

Dog::~Dog()
{
	std::cout << "Dog was deleted" << std::endl;
}

Dog &Dog::operator=(const Dog &dogs)
{
	std::cout << "Copy assignment operator Cat called ." << std::endl;
	if (this != &dogs)
	{
		type = dogs.getType();
	}
	return (*this);
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
