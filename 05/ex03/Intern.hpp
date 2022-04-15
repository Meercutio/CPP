#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &other);

	Form	*makeForm(const std::string &nameForm, const std::string &target) const;
	class UnknownTypeForm : public std::exception
	{
		const char *what() const throw();
	};
};

#endif
