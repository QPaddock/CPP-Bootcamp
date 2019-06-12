#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &newft);
		void operator = (FragTrap *obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void vaulthunter_dot_exe(std::string const & target);

		void dropletFlash(std::string const & target);
		void amplifiedHornSeal(std::string const & target);
		void illegalBeagle(std::string const & target);
		void steepleCreeple(std::string const & target);
		void sponkyWonky(std::string const & target);
};

#endif