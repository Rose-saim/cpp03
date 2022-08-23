#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name):name(name)
{
	std::cout << COLOR(CYAN, this->name)  << COLOR(CYAN, ": Constructor is called !") << std::endl;
	this->hitPoint=100;
	this->energyPoint=50;
	this->attackDamage=20;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout <<  this->name << ": Copy Constructor is called !" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << ": Destructor is called !" << std::endl;
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
	if (this->energyPoint == 0)
	{
		std::cout << COLOR(RED, this->name) << COLOR(RED, ": doesn't have enough energy.") << std::endl;
		return ;
	}
	this->energyPoint -= 1;
	std::cout << COLOR(RED, this->name) << COLOR(RED, ": use 1 energy point.") << std::endl;
	std::cout << COLOR(RED, this->name) << COLOR(RED, ": attacks, " << target) << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint < amount)
		amount = this->hitPoint;
	this->hitPoint -= amount;
	if (this->hitPoint == 0)
		std::cout << COLOR(GRN, this->name) << COLOR(GRN, ": is dead !") << std::endl;
	else
	{
		std::cout << COLOR(GRN, this->name) << COLOR(GRN, ": receives ") << COLOR(GRN, amount) << COLOR(GRN," damage.")<< std::endl;
		std::cout << COLOR(GRN, this->name) << COLOR(GRN, ": has ")  << COLOR(GRN, this->hitPoint)  << COLOR(GRN," hitPoints !")<< std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint == 0)
	{
		std::cout << COLOR(YEL, this->name) << COLOR(YEL, ": doesn't have enough energy.") << COLOR(YEL, amount) << std::endl;
		return ;
	}
	std::cout << COLOR(YEL, this->name) << COLOR(YEL, ": use 1 energy point and gain") << COLOR(YEL, amount) << std::endl;
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