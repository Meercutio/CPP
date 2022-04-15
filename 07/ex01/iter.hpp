#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	plus_one(T const &a)
{
	T b;
	b = a + 1;
	std::cout << b;
	return;
}

template<typename T>
void	iter(T *ptr, int length, void (*f)(const T &t))
{
	for (int i = 0; i < length; i++)
		f(ptr[i]);
}

#endif
