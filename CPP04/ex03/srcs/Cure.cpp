#include "Cure.hpp"

Cure::Cure()  : AMateria("cure") {}
Cure::~Cure() {}

Cure::Cure(const Cure& other) : AMateria(other) { *this = other; }

Cure& Cure::operator=(const Cure& other)
{
	AMateria::operator=(other);

	return *this;
}

AMateria* Cure::clone(void) const { return (new Cure(*this)); }

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

