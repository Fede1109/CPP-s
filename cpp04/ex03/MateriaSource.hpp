#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include  "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& ms);
		MateriaSource(const MateriaSource& ms);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
};

#endif