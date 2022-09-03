#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): 
	ClapTrap("", 100, 50, 20)
{
	std::cout << COLOR(RED, this->GetName())  << COLOR(RED, ": Constructor is called ! SCAV !!") << std::endl;
}

ScavTrap::ScavTrap(std::string name): 
	ClapTrap(name, 100, 50, 20)
{
	std::cout << COLOR(RED, this->GetName())  << COLOR(RED, ": Constructor is called: with name ! SCAV !!") << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy):
	ClapTrap("Copy", 0, 0, 0)
{
	std::cout <<  COLOR(RED, this->GetName()) <<COLOR(RED,  ": Copy Constructor is called ! SCAV !!") << std::endl;
	operator=(copy);
}

ScavTrap::~ScavTrap()
{
	std::cout <<  COLOR(RED, this->GetName()) << COLOR(RED, ": Destructor is called ! SCAV !!") << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{

	std::cout << this->GetName() << "Assignement operator called." << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->GetEnergy() >= 0)
	{
		std::cout << COLOR(RED, this->GetName()) << COLOR(RED, ": doesn't have enough energy.") << std::endl;
		return ;
	}
	this->SetEnergy(this->GetEnergy() - 1);
	std::cout << COLOR(RED, this->GetName()) << COLOR(RED, ": use 1 energy point.") << std::endl;
	std::cout << COLOR(RED, this->GetName()) << COLOR(RED, ": attacks, " << target) << std::endl;
}

void	ScavTrap::guardGate()
{
        std::cout <<  this->GetName() << ": mode GATE KEEPER !!!" << std::endl;
}
