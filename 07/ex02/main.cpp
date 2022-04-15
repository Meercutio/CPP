#include "Array.hpp"

int	main()
{
	try
	{
		Array<int> array(8);
		std::cout << "Int array size : " << array.size() << std::endl;
		for (unsigned int i = 0; i < array.size(); i++) {
			array[i] = i * i;
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;

		for (unsigned int i = 0; i < array.size(); i++) {
			array[i] = array[i] * 2;
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;

		Array<int> array2(array);
		for (unsigned int i = 0; i < array2.size(); i++) {
			array2[i] = array2[i] * 2;
			std::cout << array2[i] << " ";
		}
		std::cout << std::endl;
		Array<char> array3(10);
		for (unsigned int i = 0; i < array3.size(); i++) {
			array3[i] = 'a' + i;
			std::cout << array3[i] << " ";
		}
		std::cout << std::endl;
		Array<char> array4;
		array4 = array3;
		for (unsigned int i = 0; i < array4.size(); i++) {
			array4[i] = array4[i] + array3.size();
			std::cout << array4[i] << " ";
		}
		std::cout << std::endl;
		Array<int> array13(0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
