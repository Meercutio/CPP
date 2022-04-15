#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	else if (argc > 2)
		std::cout << "Too many comments" << std::endl;
	else
		std::cout << "Harl is silent" << std::endl;
}
