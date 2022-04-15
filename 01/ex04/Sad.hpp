#ifndef SAD_HPP
#define SAD_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Sed
{
public:
	static void	replace(std::string const &filename, std::string const &s1, std::string const &s2);
};

#endif
