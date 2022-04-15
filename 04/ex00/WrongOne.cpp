#include "WrongOne.hpp"

WrongAnimal::WrongAnimal() : type("Notype")
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &otherType) : type(otherType)
{
	std::cout << "WrongAnimal " << otherType << " was created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " was deleted" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	std::cout << "Copy assignment operator Animal called ." << std::endl;
	if (this != &animal)
	{
		type = animal.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	std::cout << "Copy constructor Animal called ." << std::endl;
	*this = animal;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Something on the WrongAnimal ." << std::endl;
}

WrongCat::WrongCat()
{
	type = ("WrongCat");
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat(const std::string &o_type)
{
	type = o_type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << type << " was deleted" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Copy assignment operator Cat called ." << std::endl;
	if (this != &other)
	{
		type = other.getType();
	}
	return (*this);
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow" << std::endl;
}
