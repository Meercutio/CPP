#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Enter 1 argument." << std::endl;
		return (1);
	}
	int	a;
	a = std::atoi(argv[1]);
	if (a == 0 && argv[1][0] != '0' && argv[1][1] == '\0')
	{
		int i;
		i = static_cast<int>(argv[1][0]);
		std::cout << "char: " << static_cast<char>(i) << "\n";
		std::cout << "int: " << static_cast<int>(i) << "\n";
		std::cout << "float: " << static_cast<float>(i) << ".0f\n";
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else
	{
		Conversion res(argv[1]);
		std::cout << res;
	}
	return (0);
}
