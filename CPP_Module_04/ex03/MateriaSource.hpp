#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :

	MateriaSource(void);
	MateriaSource(MateriaSource const & instance);
	virtual ~MateriaSource(void);

	MateriaSource&		operator=(MateriaSource const & instance);
};

#endif
