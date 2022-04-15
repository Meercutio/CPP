#include "iter.hpp"

int	main()
{
	int	*arr = new int[10];

	std::cout << "Before: ";
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	::iter(arr, 10, &plus_one);
	std::cout << std::endl;
	delete []arr;

	return 0;
}
