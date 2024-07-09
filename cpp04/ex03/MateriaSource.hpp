#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include  "./IMateriaSource.hpp"
#include "./AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_learnedMaterias[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource& operator=(const MateriaSource& ms);
		MateriaSource(const MateriaSource& ms);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
};

#endif