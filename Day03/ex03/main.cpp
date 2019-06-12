#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    std::cout << "\n\nFragTrap:\n";
    std::cout << "############################################\n";
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

    std::cout << "\n\nScavTrap:\n";
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

    std::cout << "\n\nNinjaTrap:\n";
    std::cout << "############################################\n";

    NinjaTrap* y = new NinjaTrap("Jacob");

    y->rangedAttack("Jim");
    y->meleeAttack("Jim");
    y->takeDamage(20);
    y->takeDamage(55);
    y->beRepaired(45);

    y->ninjaShoebox(*name);
    y->ninjaShoebox(*x);
    y->ninjaShoebox(*y);

    std::cout << "\n\n";
    delete name;
    std::cout << "\n\n";
    delete x;
    std::cout << "\n\n";
    delete y;
}