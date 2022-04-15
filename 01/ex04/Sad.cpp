#include "Sad.hpp"

std::string	ft_replace(std::string &line, std::string const &s1, std::string const &s2)
{
	std::string	str = line;
	size_t		pos = str.find(s1);
	while (pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length());
	}
	return (str);
}

void	Sed::replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
	std::ifstream file (filename);
	if (!file.is_open())
	{
		std::cerr << "Bad file!" << std::endl;
		return ;
	}
	if (!s1.size() || !s2.size())
	{
		std::cerr << "Empty string!" << std::endl;
		return ;
	}
	std::ofstream out(filename + ".replace", std::ios::trunc);
	std::string line;
	while (std::getline(file, line))
	{
		out << ft_replace(line, s1, s2);
		if (!file.eof())
			out << "\n";
	}
	file.close();
	out.close();
}
