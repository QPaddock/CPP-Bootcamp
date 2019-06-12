#include "FragTrap.hpp"

FragTrap::FragTrap() {
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    setHP(100);
    setMaxHP(100);
    setEP(100);
    setMaxEP(100);
    setLevel(1);
    setMelee(30);
    setRanged(20);
    setArmor(5);
    
    std::cout << this->Name << " : Hey everybody! Check out my package!\n";
}

FragTrap::~FragTrap() {
    std::cout << this->Name << " Destroyed\n";
}

FragTrap::FragTrap(const FragTrap &newft) : ClapTrap(newft) {
    *this = newft;
}

void FragTrap::rangedAttack(std::string const & target){
    std::cout << "WOW! I hit 'em! \n";
    std::cout << "FR4G-TP "
            << this->Name << " attacks "
            << target << " at range , causing " 
            << this->RangedAttack << " points of damage!\n";
}

void FragTrap::meleeAttack(std::string const & target){
    std::cout << "Bop!\n";
    std::cout << "FR4G-TP "
            << this->Name << " melees "
            << target << " , causing " 
            << this->MeleeAttack << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount) {
    int damage = amount - this->ArmorDamage;

    std::cout << "FR4G-TP "
            << this->Name << " takes "
            << amount - this->ArmorDamage << " damage!\n";

    this->HitPoints -= damage;

    if (this->HitPoints < 0)
    {
        this->HitPoints = 0;
    }

    if (this->HitPoints == 0)
    {
        std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death.\n";
    }
    else
    {
        std::cout << this->Name << " has " << this->HitPoints << " Hit Points!\n";
    }
    
}

void FragTrap::beRepaired(unsigned int amount){
    this->HitPoints += amount;

    std::cout << "Ha ha ha! I LIVE! Hahaha!\n"
            << this->Name << " repairs with amount: " 
            << amount << '\n';

    if (this->HitPoints > this->MaxHitPoints)
    {
        this->HitPoints = this->MaxHitPoints;
    }
    std::cout << "Hit Points up to: " << this->HitPoints << '\n';
    
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
    int attack;

    srand(time(NULL));
    attack = (rand() % 5);
    if (this->EnergyPoints == 0)
    {
        std::cout << "No Energy!\nAhem, ahem. What's going on? Did I break something?\n";
        return;
    }
    if (attack == 0){
        FragTrap::amplifiedHornSeal(target);
    }
    if (attack == 1){
        FragTrap::steepleCreeple(target);
    }
    if (attack == 2){
        FragTrap::sponkyWonky(target);
    }
    if (attack == 3){
        FragTrap::illegalBeagle(target);
    }
    if (attack == 4){
        FragTrap::dropletFlash(target);
    }
}

void FragTrap::amplifiedHornSeal(std::string const & target) {
    this->EnergyPoints -= 25;

    std::cout << "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!\n";

    std::cout << this->Name << " hit " << target << " Hit with an Amplified Horn Seal attack!\n";

    std::cout << this->Name << " has " << this->EnergyPoints << " Energy left!\n";
}

void FragTrap::steepleCreeple(std::string const & target) {
    this->EnergyPoints -= 25;

    std::cout << "Shwing!\n";

    std::cout << this->Name << " hit " << target << " Hit with a Steeple Creeple attack!\n";

    std::cout << this->Name << " has " << this->EnergyPoints << " Energy left!\n";
}

void FragTrap::sponkyWonky(std::string const & target) {
    this->EnergyPoints -= 25;

    std::cout << "It's happening... it's happening!\n";

    std::cout << this->Name << " hit " << target << " Hit with a Sponky Wonky attack!\n";

    std::cout << this->Name << " has " << this->EnergyPoints << " Energy left!\n";
}

void FragTrap::illegalBeagle(std::string const & target) {
    this->EnergyPoints -= 25;

    std::cout << "Let's get this party started!\n";

    std::cout << this->Name << " hit " << target << " Hit with an Illegal Beagle attack!\n";

    std::cout << this->Name << " has " << this->EnergyPoints << " Energy left!\n";
}

void FragTrap::dropletFlash(std::string const & target) {
    this->EnergyPoints -= 25;

    std::cout << "It's like a box of chocolates...\n";

    std::cout << this->Name << " hit " << target << " Hit with a Droplet Flash attack!\n";

    std::cout << this->Name << " has " << this->EnergyPoints << " Energy left!\n";
}