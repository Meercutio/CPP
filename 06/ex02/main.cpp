#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"



Base	*generate(void)
{
	srand(time(0));
	int	x = rand() % 3 + 1;
	if (x == 1) return (new A());
	if (x == 2) return (new B());
	if (x == 3) return (new C());
	return (0);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" <<std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" <<std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" <<std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" <<std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" <<std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" <<std::endl;
	}
	catch (std::exception &e) {}
}

int	main()
{
	Base *base = generate();
	Base &refBase = *base;
	std::cout << "base : ";
	identify(base);
	std::cout << "refBase : ";
	identify(refBase);
}
