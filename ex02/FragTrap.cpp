#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(): 
	ClapTrap("", 100, 100, 30)
{
	std::cout << COLOR(MAG, this->GetName())  << COLOR(MAG, ": Constructor is called ! FRAG !!") << std::endl;
}

FragTrap::FragTrap(std::string name): 
	ClapTrap(name, 100, 50, 20)
{
	std::cout << COLOR(MAG, this->GetName())  << COLOR(MAG, ": Constructor is called: with name ! FRAG !!") << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy):
	ClapTrap("Copy", 0, 0, 0)
{
	std::cout <<  COLOR(MAG, this->GetName()) << COLOR(MAG, ": Copy Constructor is called ! FRAG !!") << std::endl;
	operator=(copy);
}

FragTrap::~FragTrap()
{
	std::cout <<  COLOR(MAG, this->GetName()) << COLOR(MAG, ": Destructor is called ! FRAG !!") << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{

	std::cout << this->GetName() << "Assignement operator called." << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->GetEnergy() >= 0)
	{
		std::cout << "FragTrap " << COLOR(MAG, this->GetName()) << COLOR(MAG, ": doesn't have enough energy.") << std::endl;
		return ;
	}
	this->SetEnergy(this->GetEnergy() - 1);
	std::cout << "FragTrap " << COLOR(MAG, this->GetName()) << COLOR(MAG, ": use 1 energy point.") << std::endl;
	std::cout << "FragTrap " << COLOR(MAG, this->GetName()) << COLOR(MAG, ": attacks, " << target) << std::endl;
}

void	FragTrap::highFivesGuys()
{
        std::cout <<  this->GetName() << ": Do I can to have high Fives ?" << std::endl;
}
