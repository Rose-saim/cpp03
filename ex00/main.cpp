#include "ClapTrap.hpp"
int main()
{
	ClapTrap t1("Gre");
	ClapTrap t2("Max");
	ClapTrap t3(t2);
	unsigned int	damage;
	while (t1.GetHit() > 0 || t2.GetHit() > 0)
	{
		t1.attack(t2.GetName());
		std::cout << COLOR(BLU, "How much damage does ") << COLOR(BLU,t2.GetName()) << COLOR(BLU," do ?");
		std::cin >> damage;
		t2.takeDamage(damage);
		if (t2.GetHit() == 0)
		{
			std::cout << COLOR(YEL,t2.GetName()) << COLOR(YEL,": died shiting himself") << std::endl;
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL,"Copy: is sad becausenobody notices it during and until the end of the fight, he cries in the dark...") << std::endl;
			std::cout <<  "BOLOSS !!" << std::endl;
			return (0);
		}
		t2.attack(t1.GetName());
		std::cout << COLOR(BLU, "How much damage does ") << COLOR(BLU,t1.GetName()) << COLOR(BLU," do ?");
		std::cin >> damage;
		t1.takeDamage(damage);
		if (t1.GetHit() == 0)
		{
			std::cout << COLOR(YEL,t1.GetName()) << COLOR(YEL, ": died shtting himself") << std::endl;
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL, "Copy: is sad becausenobody notices it during and until the end of the fight, he cries in the dark...")<< std::endl;
			std::cout <<  "BOLOSS !!" << std::endl;
			return (0);
		}
	}
}