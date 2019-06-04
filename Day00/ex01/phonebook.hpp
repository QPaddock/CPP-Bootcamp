#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact 
{
    public:
    std::string first;
    std::string last;
    std::string nick;
    std::string login;
    std::string postal;
    std::string email;
    std::string cell;
    std::string dob;
    std::string meal;
    std::string underwear;
    std::string secret;
};

Contact add_con();
void search_con(Contact con[7], int i);

#endif