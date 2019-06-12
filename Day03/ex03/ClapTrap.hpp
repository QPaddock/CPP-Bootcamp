#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <string>
#include <iostream>
#include <iomanip>

class ClapTrap {
    protected:
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
        ClapTrap();
        ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &newft);
		void operator = (ClapTrap *obj);

        void setName(std::string name);
        void setHP(int value);
        void setEP(int value);
        void setMaxHP(int value);
        void setMaxEP(int value);
        void setLevel(int value);
        void setMelee(int value);
        void setRanged(int value);
        void setArmor(int value);

        std::string getName();
        int getHP(void);
        int getEP(void);
        int getMaxHP(void);
        int getMaxEP(void);
        int getLevel(void);
        int getMelee(void);
        int getRanged(void);
        int getArmour(void);
};

#endif