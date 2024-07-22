#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "./Brain.hpp"
class Animal
{
    protected:
        std::string _type;
    public:
        Animal(void);
        virtual ~Animal(void);
        Animal (const Animal& a);
        Animal& operator=(const Animal&  a);
        std::string getType(void) const;
        void setType(std::string type);
       	virtual void makeSound(void) const = 0;

};
#endif