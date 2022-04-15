#include "Cat.hpp"

Cat::Cat()
{
	type = ("Cat");
	_brain = new Brain();
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat(const std::string &o_type)
{
	type = o_type;
	_brain = new Brain();
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " was deleted" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator Cat called ." << std::endl;
	if (this != &other)
	{
		type = other.getType();
		if (_brain != nullptr)
			delete _brain;
		_brain = other._brain;
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

void	Cat::printIdea(int i) const
{
	std::cout << _brain->getIdeas(i) << std::endl;
}
