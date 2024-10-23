#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data;
	uintptr_t a = Serializer::serialize(data);
	Data *b = Serializer::deserialize(a);
	std::cout << "Antes de serializar: ->   " << data << std::endl;
	std::cout << "Después de serializar->   " <<a << std::endl;
	std::cout << "Despues de deserializar-> " << b<< std::endl;

	delete data;

	return 0;
}