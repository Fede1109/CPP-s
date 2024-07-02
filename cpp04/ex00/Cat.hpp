#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
  public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat& d);
    Cat& operator=(const Cat& d);
};
#endif