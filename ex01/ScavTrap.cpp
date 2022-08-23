#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << COLOR(CYAN, this->GetName())  << COLOR(CYAN, ": Constructor is called !") << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout <<  this->GetName() << ": Copy Constructor is called !" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{

	std::cout << this->name << "Assignement operator called." << std::endl;
	if (this!=&other)
	{
		*(this)->GetHit()=other.hitPoint;
		this->energyPoint=other.energyPoint;
		this->attackDamage=other.attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->GetEnergy() == 0)
	{
		std::cout << "SCAVTRAP " << COLOR(RED, this->GetName()) << COLOR(RED, ": doesn't have enough energy.") << std::endl;
		return ;
	}
	this->SetEnergy(this->GetEnergy() - 1);
	std::cout << "SCAVTRAP " << COLOR(RED, this->GetName()) << COLOR(RED, ": use 1 energy point.") << std::endl;
	std::cout << "SCAVTRAP " << COLOR(RED, this->GetName()) << COLOR(RED, ": attacks, " << target) << std::endl;
}
