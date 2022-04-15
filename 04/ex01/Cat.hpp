#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const std::string &otherType);
	Cat(const Cat &cat);
	~Cat();

	Cat		&operator=(const Cat &other);
	void	makeSound(void) const;
	void	printIdea(int i) const;

private:
	Brain *_brain;
};

#endif
