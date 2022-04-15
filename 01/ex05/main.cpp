#include "Harl.hpp"

int main()
{
	Harl harl;
	harl.complain(std::string("warning"));
	harl.complain(std::string("info"));
	harl.complain(std::string("debug"));
	harl.complain(std::string("error"));
	return (0);
}
