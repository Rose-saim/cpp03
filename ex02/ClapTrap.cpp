#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name):name(name)
{
	std::cout << COLOR(CYAN, this->name)  << COLOR(CYAN, ": Constructor is called ! CLAP !!") << std::endl;
	this->hitPoint=10;
	this->energyPoint=10;
	this->attackDamage=0;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoint, unsigned int energyPoint, unsigned int attackPoint):
					name(name), hitPoint(hitPoint), energyPoint(energyPoint), attackDamage(attackPoint)
{
	std::cout << COLOR(CYAN, this->name)  << COLOR(CYAN, ": Constructor param2 is called ! CLAP !!") << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout <<  COLOR(CYAN, this->name) << COLOR(CYAN, ": Copy Constructor is called ! CLAP !!") << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": Destructor is called ! CLAP !!") << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{

	std::cout << this->name << "Assignement operator called." << std::endl;
	if (this!=&other)
	{
		this->hitPoint=other.hitPoint;
		this->energyPoint=other.energyPoint;
		this->attackDamage=other.attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint >= 0)
	{
		std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": doesn't have enough energy.") << std::endl;
		return ;
	}
	this->energyPoint -= 1;
	std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": use 1 energy point.") << std::endl;
	std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": attacks, " << target) << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint < amount)
		amount = this->hitPoint;
	this->hitPoint -= amount;
	if (this->hitPoint == 0)
		std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": is dead !") << std::endl;
	else
	{
		std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": receives ") << COLOR(CYAN, amount) << COLOR(CYAN," damage.")<< std::endl;
		std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": has ")  << COLOR(CYAN, this->hitPoint)  << COLOR(CYAN," hitPoints !")<< std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint == 0)
	{
		std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": doesn't have enough energy.") << COLOR(CYAN, amount) << std::endl;
		return ;
	}
	std::cout << COLOR(CYAN, this->name) << COLOR(CYAN, ": use 1 energy point and gain") << COLOR(CYAN, amount) << std::endl;
	this->energyPoint -= 1;
	this->hitPoint += 1;
}

std::string	ClapTrap::GetName()
{
	return(this->name);
}

void	ClapTrap::SetName(std::string var)
{
	this->name = var;
}

int	ClapTrap::GetHit()
{
	return(this->hitPoint);
}

void	ClapTrap::SetHit(unsigned int var)
{
	this->hitPoint = var;
}

int	ClapTrap::GetEnergy()
{
	return(this->energyPoint);
}

void	ClapTrap::SetEnergy(int var)
{
	this->energyPoint = var;
}

int	ClapTrap::GetAttack()
{
	return(this->attackDamage);
}

void	ClapTrap::SetAttack(int var)
{
	this->attackDamage = var;
}