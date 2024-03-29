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

ScavTrap::ScavTrap(ScavTrap const& scavTrap)
{
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	*this = scavTrap;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scavTrap)
{
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;

	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints >= 1)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!";
		std::cout << std::endl;

		this->takeDamage(1);
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " has no energy points left to attack!";
		std::cout << std::endl;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode!" << std::endl;
}
