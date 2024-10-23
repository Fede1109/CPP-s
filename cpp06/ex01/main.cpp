#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *ptr = new Data;

	uintptr_t a = Serializer::serialize(ptr);
	Data *b = Serializer::deserialize(a);
	std::cout << "Antes de serializar: ->   " << ptr << std::endl;
	std::cout << "Después de serializar->   " <<a << std::endl;
	std::cout << "Despues de deserializar-> " << b<< std::endl;

	delete ptr;

	return 0;
}