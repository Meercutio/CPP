#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Noname") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.getSignGrade(), other.getExecGrade()), _target(other._target)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw Form::NotSignedException();
	if (executor.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
	try
	{
		std::ofstream file(_target + "_shrubbery", std::ios::trunc);
		if (file.bad())
			throw ("Bad file.");
		file << "                      ___\n"
				"                _,-'\"\"   \"\"\"\"`--.\n"
				"             ,-'          __,,-- \\\n"
				"           ,'    __,--\"\"\"\"dF      )\n"
				"          /   .-\"Hb_,--\"\"dF      /\n"
				"        ,'       _Hb ___dF\"-._,-'\n"
				"      ,'      _,-\"\"\"\"   \"\"--..__\n"
				"     (     ,-'                  `.\n"
				"      `._,'     _   _             ;\n"
				"       ,'     ,' `-'Hb-.___..._,-'\n"
				"       \\    ,'\"Hb.-'HH`-.dHF\"\n"
				"        `--'   \"Hb  HH  dF\"\n"
				"                \"Hb HH dF\n"
				"                 \"HbHHdF\n"
				"                  |HHHF\n"
				"                  |HHH|\n"
				"                  |HHH|\n"
				"                  |HHH|\n"
				"                  |HHH|\n"
				"                  dHHHb\n"
				"                .dFd|bHb.               o\n"
				"      o       .dHFdH|HbTHb.          o /\n"
				"\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
				"##########################################" << std::endl;
		if (file.bad())
		{
			file.close();
			throw ("Bad file.");
		}
		file.close();
	}
	catch (const char &ex)
	{
		std::cerr << "Error: " << ex << std::endl;
	}
}
