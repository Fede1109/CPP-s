#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;


class AMateria
{
	protected:
	public:
		std::string	_type;
	AMateria(void);
	virtual ~AMateria(void);
	AMateria&  operator=(const AMateria& am);
	AMateria(const AMateria& am);
	
	AMateria(std::string  const &type);
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif