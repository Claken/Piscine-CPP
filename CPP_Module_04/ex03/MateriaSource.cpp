#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & instance)
{
	*this = instance;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

void				MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			return ;
		}
	}
	std::cout << "Cannot learn more than 4 Materias" << std::endl;
	delete m;
}

AMateria*			MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return 0;
}

MateriaSource&		MateriaSource::operator=(MateriaSource const & instance)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
		{
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (instance._materias[i])
			this->_materias[i] = instance._materias[i]->clone();
	}
	return (*this);
}
