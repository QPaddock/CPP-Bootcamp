#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap {
	private:
		int HitPoints;
		int MaxHitPoints;
		int EnergyPoints;
		int MaxEnergyPoints;
		int Level;
		int MeleeAttack;
		int RangedAttack;
		int ArmorDamage;

		std::string Name;

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &newft);
		void operator = (ClapTrap *obj);
};

#endif