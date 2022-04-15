#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other)
{
	(void) other;
	return (*this);
}

Form	*presidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*robotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*shrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const std::string &nameForm, const std::string &target) const
{
	typedef struct s_struct{
		std::string	name;
		Form		*(*action)(const std::string &target);
	} t_struct;
	t_struct	list[3] = {{"presidential pardon", &presidentialPardonForm}, \
							{"robotomy request", robotomyRequestForm}, \
							{"shrubbery creation", shrubberyCreationForm}};
	for (int i = 0; i < 3; i++)
	{
		if (nameForm == list[i].name)
		{
			std::cout << "Intern create " << nameForm << target << std::endl;
			return (list[i].action(target));
		}
	}
	std::cout << nameForm;
	throw Intern::UnknownTypeForm();
}

const char	*Intern::UnknownTypeForm::what() const throw()
{
	return ("Unknown type Form");
}
