#include <iostream>
#include <stdint.h>

typedef	struct s_Data
{
	int			age;
	std::string	name;
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data	data = {123, "Petr"};
	uintptr_t	raw;
	Data	*afterCast;

	std::cout << "Before: " << data.age << " " << data.name << std::endl;
	raw = serialize(&data);
	std::cout << "uintptr_t: " << raw << std::endl;
	afterCast = deserialize(raw);
	std::cout << "After: " << afterCast->age << " " << afterCast->name << std::endl;
	return (0);
}
