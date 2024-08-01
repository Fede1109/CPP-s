#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "Default WrongCat costructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat& d)
{
    this->_type = d._type;
    return *this;
}

WrongCat::WrongCat(const WrongCat& d)
{
    *this = d;
    std::cout << "WrongCat copy constructor called" << std::endl;
    return ;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "Miau" << std::endl;
}