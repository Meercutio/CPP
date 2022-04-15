#include "Sad.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Sed::replace(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Error : Invalid number of arguments.\nUsage: filename search replace" << std::endl;
}
