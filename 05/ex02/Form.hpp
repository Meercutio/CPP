#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string &name, int to_sign, int to_exec);
	Form(const Form &other);
	~Form();
	Form &operator=(const Form &other);

	const std::string&	getName() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	bool				getSign() const;

	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public  std::exception {
	public:
		const char *what() const throw();
	};
	class NotSignedException : public std::exception {
	public:
		const char *what() const throw();
	};

	void			beSigned(Bureaucrat const &bureaucrat);
	virtual	void	execute(Bureaucrat const &executor) const = 0;

private:
	std::string	_name;
	bool		_sign;
	const int	_signGrade;
	const int	_execGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
