#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-specialketchup burger. "
				 "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs "
				 "more money. You didn’t put enough bacon in my burger! "
				 "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for"
				 "years whereas you started working here since last month" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

int	levelFind(std::string level)
{
	std::string funcPool[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; ++i)
		if (funcPool[i] == level)
			return i;
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	num = levelFind(level);
	switch (num)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
