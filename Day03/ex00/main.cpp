#include "FragTrap.hpp"

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
}