#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string &otherType);
	Dog(const Dog &dog);
	~Dog();

	Dog		&operator=(const Dog &dogs);
	void	makeSound(void) const;
	void	printIdea(int i) const;

private:
	Brain *_brain;
};

#endif
