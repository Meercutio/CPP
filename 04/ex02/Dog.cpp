#include "Dog.hpp"

Dog::Dog()
{
	type = ("Dog");
	_brain = new Brain();
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog(const std::string &o_type)
{
	type = o_type;
	_brain = new Brain();
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << type << " was deleted" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator Cat called ." << std::endl;
	if (this != &other)
	{
		type = other.getType();
		if (_brain != nullptr)
			delete _brain;
		_brain = new Brain;
		_brain = other._brain;
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

void	Dog::printIdea(int i) const
{
	std::cout << _brain->getIdeas(i) << std::endl;
}
