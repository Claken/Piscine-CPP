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
	virtual ~MateriaSource(void) {};

	MateriaSource&		operator=(MateriaSource const & instance);
};

#endif
