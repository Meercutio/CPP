#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "sleep";
	std::cout << "Brain was created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain was deleted" << std::endl;
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Copy assignment operator Brain called ." << std::endl;
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = brain.getIdeas(i);
	}
	return (*this);
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Copy constructor Brain called ." << std::endl;
	*this = brain;
}

std::string Brain::getIdeas(int index) const
{
	if (index < 0 || index > 99)
	{
		std::runtime_error("Error index !");
		exit(1);
	}
	return (ideas[index]);
}

//std::string	Brain::setIdeas()
//{
//	std::string	arrIdeas[4] = {"eat", "drink", "sleep", "walk"};
//	return (arrIdeas[1]);
//}
