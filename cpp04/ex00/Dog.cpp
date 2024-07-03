#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Default dog costructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog &Dog::operator=(const Dog& d)
{
    this->_type = d._type;
    return *this;
}

Dog::Dog(const Dog& d)
{
    *this = d;
    std::cout << "Dog copy constructor called" << std::endl;
    return ;
}

void    Dog::makeSound(void) const
{
    std::cout << "Guau" << std::endl;
}