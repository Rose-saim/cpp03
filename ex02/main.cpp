#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ClapTrap t1("Clap");
	ScavTrap t2("Scav");
	FragTrap t3("Frag");
	ScavTrap t4;
	unsigned int	damage;
	while (t1.GetHit() > 0 || t2.GetHit() > 0 || t3.GetHit() > 0|| t4.GetHit() > 0)
	{
		t1.attack(t2.GetName());
		std::cout << COLOR(BLU, "How much damage does ") << COLOR(BLU,t2.GetName()) << COLOR(BLU," do ?");
		std::cin >> damage;
		if (std::cin.fail())
			return (2);
		t2.takeDamage(damage);
		if (t2.GetHit() < 20)
			t2.guardGate();
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
		if (std::cin.fail())
			return (2);
		t2.takeDamage(damage);
		t1.takeDamage(damage);
		if (t1.GetHit() == 0)
		{
			std::cout << COLOR(YEL,t1.GetName()) << COLOR(YEL, ": died shtting himself") << std::endl;
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL, "Copy: is sad becausenobody notices it during and until the end of the fight, he cries in the dark...")<< std::endl;
			std::cout <<  "BOLOSS !!" << std::endl;
			return (0);
		}
		t3.attack(t4.GetName());
		t3.highFivesGuys();
		std::cout << COLOR(BLU, "How much damage does ") << COLOR(BLU,t4.GetName()) << COLOR(BLU," do ?");
		std::cin >> damage;
		if (std::cin.fail())
			return (2);
			t2.takeDamage(damage);
		if (t4.GetHit() < 20)
			t4.guardGate();
		t4.takeDamage(damage);
		t4.guardGate();
		if (t4.GetHit() == 0)
		{
			std::cout << COLOR(YEL,t4.GetName()) << COLOR(YEL,": died shiting himself") << std::endl;
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL,"Copy: is sad becausenobody notices it during and until the end of the fight, he cries in the dark...") << std::endl;
			std::cout <<  "BOLOSS !!" << std::endl;
			return (0);
		}
		t4.attack(t3.GetName());
		std::cout << COLOR(BLU, "How much damage does ") << COLOR(BLU,t3.GetName()) << COLOR(BLU," do ?");
		std::cin >> damage;
		if (std::cin.fail())
			return (2);
			t2.takeDamage(damage);
		t3.takeDamage(damage);
		if (t3.GetHit() == 0)
		{
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL, ": died shtting himself") << std::endl;
			std::cout << COLOR(YEL,t3.GetName()) << COLOR(YEL, "Copy: is sad becausenobody notices it during and until the end of the fight, he cries in the dark...")<< std::endl;
			std::cout <<  "BOLOSS !!" << std::endl;
			return (0);
		}
	}
}
