#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Default dog costructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog &Dog::operator=(const Dog& d)
{
    this->type = d.type;
    return *this;
}

Dog::Dog(const Dog& d)
{
    *this = d;
    std::cout << "Dog copy constructor called" << std::endl;
    return ;
}

void    makeSound(void)
{
    std::cout << "Guau" << std::endl;
}