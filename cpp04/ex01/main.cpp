#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./Brain.hpp"
#include "./Animal.hpp"
int main()
{
	const Brain *b = new Brain();
	const Animal *j = new Dog();
	const Animal *i = new Cat();	
	delete j; // should not create a leak
	delete i;
	delete b;
	return 0;
}