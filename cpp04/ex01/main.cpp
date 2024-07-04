#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./Brain.hpp"
#include "./Animal.hpp"
int main()
{
	Animal *animals[50];

	Dog basic;
	{
		Dog tmp = basic;
	}
	for (size_t i = 0; i < 25; i++)
	{
		animals[i] = new Cat();
		std::cout << "------------------------" << std::endl;
	}

	for (size_t i = 25; i < 50; i++)
	{
		animals[i] = new Dog();
		std::cout << "------------------------" << std::endl;
	}

	for (size_t i = 0; i < 50; i++)
	{
		delete animals[i];
		std::cout << "------------------------" << std::endl;
	}
	return 0;
}