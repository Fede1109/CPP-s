#include "Cat.hpp"

Cat::Cat(void)
{
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Default Cat costructor called" << std::endl;
}

Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;
}
Cat &Cat::operator=(const Cat& d)
{
    this->_brain = d._brain;
    this->_type = d._type;
    return *this;
}

Cat::Cat(const Cat& d)
{
    *this = d;
    std::cout << "Cat copy constructor called" << std::endl;
    return ;
}

void    Cat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}