#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}

Ice::Ice(const Ice& other) : AMateria(other) { *this = other; }

Ice& Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);

	return *this;
}

AMateria* Ice::clone(void) const { return (new Ice(*this)); }

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
