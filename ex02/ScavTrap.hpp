#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap const &other);
		void attack(const std::string& target);
		void guardGate();
};

#endif