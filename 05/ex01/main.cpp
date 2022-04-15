#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	Marat("Marat", 140);
		std::cout << Marat << std::endl;
		Form		sheet("Sheet", 100, 80);
		std::cout << sheet << std::endl;
		Marat.signForm(sheet);
		Bureaucrat Danya("Danya", 5);
		std::cout << Danya << std::endl;
		Danya.signForm(sheet);
	}
	catch (std::exception &ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
	return (0);
}
