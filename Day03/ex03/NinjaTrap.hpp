#ifndef NINJATRAP_HPP_
#define NINJATRAP_HPP_

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &newft);
		void operator = (NinjaTrap *obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void ninjaShoebox(FragTrap &thing);
		void ninjaShoebox(ScavTrap &thing);
		void ninjaShoebox(NinjaTrap &thing);
};

#endif