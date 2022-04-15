#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat	Marat("Marat", 140);
		std::cout << Marat << std::endl;
		RobotomyRequestForm form("Pact");
		std::cout << form << std::endl;
		Marat.signForm(form);
		std::cout << form << std::endl;
		Bureaucrat Danya("Danya", 5);
		std::cout << Danya << std::endl;
		Danya.signForm(form);
		Danya.executeForm(form);
	}
	catch (std::exception &ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
	return (0);
}
