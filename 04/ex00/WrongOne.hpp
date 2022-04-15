#ifndef WRONGONE_HPP
#define WRONGONE_HPP

#include "Animal.hpp"

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const std::string &otherType);
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();

	WrongAnimal		&operator=(const WrongAnimal &animal);
	std::string		getType(void) const;
	virtual	void	makeSound(void) const;

protected:
	std::string type;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const std::string &otherType);
	WrongCat(const WrongCat &cat);
	~WrongCat();

	WrongCat	&operator=(const WrongCat &other);
	void		makeSound(void) const;
};

#endif
