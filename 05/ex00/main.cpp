#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	Marat("Marat", 140);
		std::cout << Marat << std::endl;
		Bureaucrat Danya("Danya", 5);
		std::cout << Danya << std::endl;

		for (int i = 0; i < 6; i++)
		{
			Danya.incrementGrade();
			std::cout << Danya << std::endl;
		}
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);
}
