#include "./WrongAnimal.hpp"


WrongAnimal::WrongAnimal(void)
{
    this->_type = "default";
    std::cout << "WrongAnimal default constructor called"<< std::endl;;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& a)
{
    this->_type = a._type;
    return *this;
}
WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
    *this = a;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const
{
    return this->_type;
}

void    WrongAnimal::setType(std::string type)
{
    this->_type = type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "Random noise" << std::endl;
}