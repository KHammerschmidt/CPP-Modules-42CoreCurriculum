#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ground.hpp"
#include "Ground.hpp"

class AMateria;

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria*	_inventory[4];

public:
	Character(std::string const name);
	Character(const Character& other);

	Character& operator=(const Character& other);

	std::string const& 	getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);

	virtual ~Character();
};

#endif
