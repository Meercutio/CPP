#include "Form.hpp"

Form::Form() : _name("Noname"), _sign(false), _signGrade(150), _execGrade(150)
{
	std::cout << _name << "was created" << std::endl;
}

Form::Form(const std::string &name, int to_sign, int to_exec) : _name(name), _sign(false), _signGrade(to_sign), _execGrade(to_exec)
{
	if (to_sign < 1 || to_exec < 1)
		throw Form::GradeTooHighException();
	if (to_sign > 150 || to_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << _name << " form was created." << std::endl;
}

Form::~Form() {}

Form	&Form::operator=(const Form &other)
{
	if (this != &other)
		_sign = other.getSign();
	return (*this);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

const std::string	&Form::getName() const
{
	return (_name);
}

bool Form::getSign() const
{
	return (_sign);
}

Form::Form(const Form &other) : _name(other.getName()), _signGrade(other.getSignGrade()), _execGrade(getExecGrade())
{
	*this = other;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > getSignGrade())
		throw Form::GradeTooHighException();
	_sign = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ". Grade to sign " << form.getSignGrade() << ""
	  ", grade to execute " << form.getExecGrade() << std::endl;
	out << "it is ";
	if (form.getSign())
		out << "signed!" << std::endl;
	else
		out << "NOT signed!" << std::endl;
	return (out);
}
