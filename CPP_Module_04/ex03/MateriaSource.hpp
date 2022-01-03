#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected :

	AMateria*	_materias[4];

	public :

	MateriaSource(void);
	MateriaSource(MateriaSource const & instance);
	virtual ~MateriaSource(void);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria*	createMateria(std::string const & type);
	MateriaSource&		operator=(MateriaSource const & instance);
};

#endif
