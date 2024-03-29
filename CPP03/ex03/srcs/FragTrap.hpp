#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(bool);

		FragTrap(FragTrap const& fragTrap);
		FragTrap& operator=(FragTrap const& fragTrap);

		void	highFivesGuys(void);
};

#endif