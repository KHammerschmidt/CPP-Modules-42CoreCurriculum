#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_inventory[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const& type);

	virtual ~MateriaSource();
};

#endif