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
	Data		*ptr = new Data(12, 24.2, 'a');
	uintptr_t	raw;
	Data*		deserializedPtr = NULL;

	std::cout << "ptr c value              = " << ptr->getCValue() << std::endl;
	std::cout << "ptr f value              = " << ptr->getFValue() << std::endl;
	std::cout << "ptr i value              = " << ptr->getIValue() << std::endl;
	std::cout << "ptr adress               = " << ptr << std::endl;
	std::cout << std::endl;

	raw = serialize(ptr);

	std::cout << "raw adress               = " << raw << std::endl;
	std::cout << std::endl;

	deserializedPtr = deserialize(raw);

	std::cout << "deserializedPtr c value  = " << deserializedPtr->getCValue() << std::endl;
	std::cout << "deserializedPtr f value  = " << deserializedPtr->getFValue() << std::endl;
	std::cout << "deserializedPtr i value  = " << deserializedPtr->getIValue() << std::endl;
	std::cout << "deserializedPtr adress   = " << deserializedPtr << std::endl;
	std::cout << std::endl;

	std::cout << "ptr adress               = " << ptr << std::endl;
	std::cout << "deserializedPtr adress   = " << deserializedPtr << std::endl;

	delete ptr;

	return (0);
}
