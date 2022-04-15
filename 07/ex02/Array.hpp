#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class	Array
{
public:
	Array() : _data(NULL), _len(0) {}
	Array(unsigned int len)
	{
		if (len == 0) throw BadAlloc();
		_len = len;
		_data = new T[len];
		if (!_data) throw BadAlloc();
		for (unsigned int i = 0; i < len; i++)
			_data[i] = 0;
	}
	Array(const Array &other) : _len(other._len)
	{
		_data = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_data[i] = other._data[i];
	}
	~Array()
	{
		delete []_data;
	}
	Array const &operator=(Array const &other)
	{
		if (this != &other)
		{
			if (_data != NULL)
				delete []_data;
			_len = other._len;
			_data = new T[_len];
			if (!_data) throw BadAlloc();
			for (unsigned int i = 0; i < _len; i++)
				_data[i] = other._data[i];
		}
		return (*this);
	}
	T	&operator[](unsigned int index)
	{
		if (index >= _len) throw ArrayException();
		return (_data[index]);
	}
	unsigned int	size()
	{
		return (_len);
	}

private:
	T				*_data;
	unsigned int	_len;

class BadAlloc : public std::exception
{
	const char	*what() const throw()
	{
		return ("Bad allocation.");
	}
};

class	ArrayException : public std::exception
{
	const char	*what() const throw()
	{
		return ("Out of range");
	}
};
};

#endif
