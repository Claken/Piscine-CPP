#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int
	main(void)
{
	Data		*ptr = new Data();
	uintptr_t	raw;
	Data*		deserializedPtr = NULL;

	std::cout << "ptr value  = " << ptr->getValue() << std::endl;
	*ptr = 12;
	std::cout << "ptr value  = " << ptr->getValue() << std::endl;
	std::cout << "ptr adress = " << ptr << std::endl;

	raw = serialize(ptr);

	std::cout << "raw adress = " << raw << std::endl;

	deserializedPtr = deserialize(raw);

	std::cout << "deserializedPtr value  = " << deserializedPtr->getValue() << std::endl;
	std::cout << "deserializedPtr adress = " << deserializedPtr << std::endl;
	
	delete ptr;
	return (0);
}
