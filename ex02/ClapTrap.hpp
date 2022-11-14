#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

#define RST  "\x1B[0m"
#define RED  "\x1B[31m"
#define GRN  "\x1B[32m"
#define YEL  "\x1B[33m"
#define BLU  "\x1B[34m"
#define MAG  "\x1B[35m"
#define CYN  "\x1B[36m"
#define WHT  "\x1B[37m"

#define FRED "\x1b[41m"
#define FGRN "\x1b[1m"
#define FYEL YEL x RST
#define FBLU BLU x RST
#define FMAG MAG x RST
#define FCYN CYN x RST
#define FWHT WHT x RST

#define BOLD(x) "\x1B[1m" x RST
#define UNDL(x) "\x1B[4m" x RST
#define CYAN    "\033[36m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"
#define COLOR(C, c) C << c << RESET
class ClapTrap
{
private:
	std::string	name;
	unsigned int			hitPoint;
	int			energyPoint;
	unsigned int			attackDamage;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &copy);
	ClapTrap(std::string name, unsigned int hitpoint, unsigned int energyPoint, unsigned int attackPoint);
	~ClapTrap();
	ClapTrap& operator=(ClapTrap const &other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	GetName();
	int	GetHit();
	int	GetEnergy();
	int	GetAttack();
	void	SetName(std::string var);
	void	SetHit(unsigned int var);
	void	SetEnergy(int var);
	void	SetAttack(int var);
};


#endif