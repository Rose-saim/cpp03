#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &copy);
    ~FragTrap();
	FragTrap& operator=(FragTrap const &other);
	void attack(const std::string& target);
	void highFivesGuys();
};

#endif