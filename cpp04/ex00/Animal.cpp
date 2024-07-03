#include "./Animal.hpp"


Animal::Animal(void)
{
    this->_type = "default";
    std::cout << "Animal default constructor called"<< std::endl;;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& a)
{
    this->_type = a._type;
    return *this;
}
Animal::Animal(const Animal& a)
{
    *this = a;
    std::cout << "Animal copy constructor called" << std::endl;
    return ;
}

std::string Animal::getType(void) const
{
    return this->_type;
}

void    Animal::setType(std::string type)
{
    this->_type = type;
}

void    Animal::makeSound(void) const
{
    std::cout << "Random noise" << std::endl;
}