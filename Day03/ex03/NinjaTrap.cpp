#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {

    setHP(60);
    setMaxHP(60);
    setEP(120);
    setMaxEP(120);
    setLevel(1);
    setMelee(60);
    setRanged(5);
    setArmor(0);
    
    std::cout << this->Name << ": I'm a robot ninja...\n";
}

NinjaTrap::~NinjaTrap() {
    std::cout << this->Name << " Destroyed\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap &newft) : ClapTrap(newft) {
    *this = newft;
}

void NinjaTrap::rangedAttack(std::string const & target){
    std::cout << "Ooh, squishy bits!\n";
    std::cout << "NINJ4-TP "
            << this->Name << " attacks "
            << target << " at range , causing " 
            << this->RangedAttack << " points of damage!\n";
}

void NinjaTrap::meleeAttack(std::string const & target){
    std::cout << "Hyah!\n";
    std::cout << "NINJ4-TP "
            << this->Name << " melees "
            << target << " , causing " 
            << this->MeleeAttack << " points of damage!\n";
}

void NinjaTrap::takeDamage(unsigned int amount) {
    int damage = amount - this->ArmorDamage;

    std::cout << "NINJ4-TP "
            << this->Name << " takes "
            << amount - this->ArmorDamage << " damage!\n";

    this->HitPoints -= damage;

    if (this->HitPoints < 0)
    {
        this->HitPoints = 0;
    }

    if (this->HitPoints == 0)
    {
        std::cout << "The robot is dead, long live the robot!\n";
    }
    else
    {
        std::cout << this->Name << " has " << this->HitPoints << " Hit Points!\n";
    }
    
}

void NinjaTrap::beRepaired(unsigned int amount){
    this->HitPoints += amount;

    std::cout << "Can I just say... yeehaw.\n"
            << this->Name << " repairs with amount: " 
            << amount << '\n';

    if (this->HitPoints > this->MaxHitPoints)
    {
        this->HitPoints = this->MaxHitPoints;
    }
    std::cout << "Hit Points up to: " << this->HitPoints << '\n';
    
}

    void NinjaTrap::ninjaShoebox(FragTrap & thing){
        std::cout << thing.getName() << " Running the sequencer!\n";
    }

	void NinjaTrap::ninjaShoebox(ScavTrap & thing){
        std::cout << thing.getName() << " Step right up to the sequence of Trapping!\n";
    }

	void NinjaTrap::ninjaShoebox(NinjaTrap & thing){
        std::cout << thing.getName() << " Loading combat packages!\n";
    }