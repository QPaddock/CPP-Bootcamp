#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : Name(name) {

    HitPoints = 100;
    MaxHitPoints = 100;
    EnergyPoints = 50;
    MaxEnergyPoints = 50;
    Level = 1;
    MeleeAttack = 20;
    RangedAttack = 15;
    ArmorDamage = 3;
    
    std::cout << this->Name << " : Recompiling my combat code!\n";
}

ScavTrap::~ScavTrap() {
    std::cout << this->Name << " Out 🖕🖕\n";
}

ScavTrap::ScavTrap(const ScavTrap &newft) {
    *this = newft;
}

void ScavTrap::rangedAttack(std::string const & target){
    std::cout << "Huh, robot's don't do that. \n";
    std::cout << "SC4V-TP "
            << this->Name << " attacks "
            << target << " at range , causing " 
            << this->RangedAttack << " points of damage!\n";
}

void ScavTrap::meleeAttack(std::string const & target){
    std::cout << "Heyyah!\n";
    std::cout << "SC4V-TP "
            << this->Name << " melees "
            << target << " , causing " 
            << this->MeleeAttack << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount) {
    int damage = amount - this->ArmorDamage;

    std::cout << "SC4V-TP "
            << this->Name << " takes "
            << amount - this->ArmorDamage << " damage!\n";

    this->HitPoints -= damage;

    if (this->HitPoints < 0)
    {
        this->HitPoints = 0;
    }

    if (this->HitPoints == 0)
    {
        std::cout << "Oh crap.\n";
    }
    else
    {
        std::cout << this->Name << " has " << this->HitPoints << " Hit Points!\n";
    }
    
}

void ScavTrap::beRepaired(unsigned int amount){
    this->HitPoints += amount;

    std::cout << "Poof, all better, doll!\n"
            << this->Name << " repairs with amount: " 
            << amount << '\n';

    if (this->HitPoints > this->MaxHitPoints)
    {
        this->HitPoints = this->MaxHitPoints;
    }
    std::cout << "Hit Points up to: " << this->HitPoints << '\n';
    
}

void ScavTrap::challengeNewcomer(std::string const & target) {
    int attack;

    srand(time(NULL));
    attack = (rand() % 5);
    if (attack == 0){
        ScavTrap::epicCh(target);
    }
    if (attack == 1){
        ScavTrap::lameCh(target);
    }
    if (attack == 2){
        ScavTrap::okCh(target);
    }
    if (attack == 3){
        ScavTrap::wowCh(target);
    }
    if (attack == 4){
        ScavTrap::byCh(target);
    }
}

void ScavTrap::epicCh(std::string const & target) {
    std::cout << target << "! You versus me! Me versus you! Either way!\n";
}

void ScavTrap::lameCh(std::string const & target) {

    std::cout << target << "! I will prove to you my robotic superiority!\n";
}

void ScavTrap::okCh(std::string const & target) {

    std::cout << target << "! Dance battle! Or, you know... regular battle.\n";
}

void ScavTrap::wowCh(std::string const & target) {

    std::cout << target << "! Man versus machine! Very tiny streamlined machine!\n";
}

void ScavTrap::byCh(std::string const & target) {

    std::cout << target << "! Care to have a friendly duel?\n";
}