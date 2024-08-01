#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        virtual ~WrongAnimal(void);
        WrongAnimal (const WrongAnimal& a);
        WrongAnimal& operator=(const WrongAnimal&  a);
        std::string getType(void) const;
        void setType(std::string type);
       	void makeSound(void) const;

};
#endif