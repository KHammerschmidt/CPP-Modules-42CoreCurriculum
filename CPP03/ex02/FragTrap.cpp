#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default constructor FragTrap called!" << std::endl;

	this->_name = "_frag_trap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name-Constructor FragTrap called!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& fragTrap)
{
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(FragTrap const& fragTrap)
{
	this->_name = fragTrap._name;
	this->_energyPoints = fragTrap._energyPoints;
	this->_hitPoints = fragTrap._hitPoints;
	this->_attackDamage = fragTrap._attackDamage;

	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " asks for a high five!" << std::endl;
}
