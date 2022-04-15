#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(const std::string &otherType);
	Animal(const Animal &animal);
	virtual ~Animal();

	Animal			&operator=(const Animal &animal);
	std::string		getType(void) const;
	virtual	void	makeSound(void) const;
	virtual void	printIdea(int i) const;

protected:
	std::string type;
};

#endif
