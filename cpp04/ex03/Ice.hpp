#ifndef ICE_HPP
#define ICE_HPP
#include "./AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice& operator=(const Ice& c);
		Ice(const Ice& c);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif