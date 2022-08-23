#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &name);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap const &other);
		void attack(const std::string& target);
		void guardGate();
};

#endif