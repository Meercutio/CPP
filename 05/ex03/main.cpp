#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern	someIntern;
		Form	*form;
		form = someIntern.makeForm("shrubbery creation", "Home");
		Bureaucrat	Marat("Marat", 3);
		Marat.signForm(*form);
		Marat.executeForm(*form);
	}
	catch (std::exception &ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
	return (0);
}
