#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &d);
		Cat &operator=(const Cat &d);
		void makeSound(void) const;
};
#endif
