#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    FragTrap* name = new FragTrap("John");
    name->rangedAttack("Jim");
    name->meleeAttack("Jim");
    name->takeDamage(20);
    name->takeDamage(55);
    name->beRepaired(45);

    name->vaulthunter_dot_exe("Jim");
    name->vaulthunter_dot_exe("Jim");
    name->vaulthunter_dot_exe("Jim");
    name->vaulthunter_dot_exe("Jim");
    name->vaulthunter_dot_exe("Jim");

    delete name;

    std::cout << "\n\n";
    std::cout << "############################################\n";

    ScavTrap* x = new ScavTrap("Lewis");

    x->rangedAttack("Jim");
    x->meleeAttack("Jim");
    x->takeDamage(20);
    x->takeDamage(55);
    x->beRepaired(45);

    x->challengeNewcomer("Jim");
    x->challengeNewcomer("Jim");
    x->challengeNewcomer("Jim");
    x->challengeNewcomer("Jim");
    x->challengeNewcomer("Jim");
    x->challengeNewcomer("Jim");
    delete x;
}