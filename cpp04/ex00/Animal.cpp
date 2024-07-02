#include "./Animal.hpp"


Animal::Animal(void)
{
    this->type = "default";
    std::cout << "Animal default constructor called";
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& a)
{
    this->type = a.type;
    return *this;
}
Animal::Animal(const Animal& a)
{
    *this = a;
    std::cout << "Animal copy constructor called" << std::endl;
    return ;
}