#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Created!\n";
}

ClapTrap::ClapTrap(std::string name) : Name(name) {
    std::cout << this->Name << ": ClapTrap Created!\n";
}

ClapTrap::~ClapTrap() {
    std::cout << this->Name << " ClapTrap Destroyed\n";
}

ClapTrap::ClapTrap(const ClapTrap &newft) {
    *this = newft;
}


void    ClapTrap::setName(std::string name) {
        this->Name = name;
    }

    void    ClapTrap::setHP(int value) {
        this->HitPoints = value;
    }

    void    ClapTrap::setEP(int value) {
        this->EnergyPoints = value;
    }

    void    ClapTrap::setMaxHP(int value) {
        this->MaxHitPoints = value;
    }

    void    ClapTrap::setMaxEP(int value) {
        this->MaxEnergyPoints = value;
    }

    void    ClapTrap::setLevel(int value) {
        this->Level = value;
    }

    void    ClapTrap::setMelee(int value) {
        this->MeleeAttack = value;
    }

    void    ClapTrap::setRanged(int value) {
        this->RangedAttack = value;
    }

    void    ClapTrap::setArmor(int value) {
        this->ArmorDamage = value;
    }