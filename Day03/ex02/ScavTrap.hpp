#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <string>
#include <iostream>
#include <iomanip>

class ScavTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &newft);
		void operator = (ScavTrap *obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void challengeNewcomer(std::string const & target);

		void epicCh(std::string const & target);
		void lameCh(std::string const & target);
		void okCh(std::string const & target);
		void wowCh(std::string const & target);
		void byCh(std::string const & target);
};

#endif