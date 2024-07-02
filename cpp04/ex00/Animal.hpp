#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        ~Animal(void);
        Animal (const Animal& a);
        Animal& operator=(const Animal&  a);
};
#endif