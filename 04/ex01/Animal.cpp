#include "Animal.hpp"

Animal::Animal() : type("Notype")
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal(const std::string &otherType) : type(otherType)
{
	std::cout << "Animal " << otherType << " was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " was deleted" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	std::cout << "Copy assignment operator Animal called ." << std::endl;
	if (this != &animal)
	{
		type = animal.type;
	}
	return (*this);
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Copy constructor Animal called ." << std::endl;
	*this = animal;
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Something on the Animal ." << std::endl;
}

void	Animal::printIdea(int i) const
{
	std::cout << "Some idea" << i << std::endl;
}
