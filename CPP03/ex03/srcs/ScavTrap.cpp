#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default constructor ScavTrap called!" << std::endl;
	this->_name = "_scav_trap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage= 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name-Constructor ScavTrap called!" << std::endl;

	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage= 20;
}

ScavTrap::ScavTrap(bool)
{
	std::cout << "Special-Constructor ScavTrap called!" << std::endl;

	this->_energyPoints = 50;
}

ScavTrap::ScavTrap(ScavTrap const& scavTrap) : ClapTrap(scavTrap)
{
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scavTrap)
{
	ClapTrap::operator=(scavTrap);

	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode!" << std::endl;
}
