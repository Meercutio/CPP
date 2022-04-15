#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void		announce(void);
	void		setName(std::string name);
	std::string	getName();

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
