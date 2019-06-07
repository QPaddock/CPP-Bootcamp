#include "ClapTrap.hpp"

ClapTrap::~ClapTrap() {
    std::cout << this->Name << " Destroyed\n";
}

ClapTrap::ClapTrap(const ClapTrap &newft) {
    *this = newft;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name) {

    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 100;
    MaxEnergyPoints = 100;
    Level = 1;
    MeleeAttack = 30;
    RangedAttack = 20;
    ArmorDamage = 5;
    
    std::cout << this->Name << " : Hey everybody! Check out my package!\n";
}

ClapTrap::~ClapTrap() {
    std::cout << this->Name << " Destroyed\n";
}

ClapTrap::ClapTrap(const ClapTrap &newft) {
    *this = newft;
}