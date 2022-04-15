#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const std::string &otherType);
	Cat(const Cat &cat);
	~Cat();

	Cat		&operator=(const Cat &other);
	void	makeSound(void) const;
};

#endif
