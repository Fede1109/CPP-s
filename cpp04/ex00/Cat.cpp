#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Default Cat costructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}
Cat &Cat::operator=(const Cat& d)
{
    this->type = d.type;
    return *this;
}

Cat::Cat(const Cat& d)
{
    *this = d;
    std::cout << "Cat copy constructor called" << std::endl;
    return ;
}