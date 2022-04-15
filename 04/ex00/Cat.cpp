#include "Cat.hpp"

Cat::Cat()
{
	type = ("Cat");
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const std::string &o_type)
{
	type = o_type;
}

Cat::~Cat()
{
	std::cout << "Cat was deleted" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called ." << std::endl;
	if (this != &other)
	{
		type = other.getType();
	}
	return (*this);
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
