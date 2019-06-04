#include "phonebook.hpp"

Contact add_con()
{
    Contact con;
    
    std::cout << "Enter First Name:\n";
    std::cin.ignore(1, '\n');
    std::getline(std::cin ,con.first);

    std::cout << "Enter Last Name:\n";
    std::getline(std::cin , con.last);

    std::cout << "Enter Nickname:\n";
    std::getline(std::cin , con.nick);

    std::cout << "Enter Login:\n";
    std::getline(std::cin , con.login);

    std::cout << "Enter Postal Address:\n";
    std::getline(std::cin , con.postal);

    std::cout << "Enter Email:\n";
    std::getline(std::cin , con.email);

    std::cout << "Enter Phone Number:\n";
    std::getline(std::cin , con.cell);

    std::cout << "Enter Birth Date:\n";
    std::getline(std::cin , con.dob);

    std::cout << "Enter Favorite Meal:\n";
    std::getline(std::cin , con.meal);

    std::cout << "Enter Underwear Color:\n";
    std::getline(std::cin , con.underwear);

    std::cout << "Enter Darkest Secret:\n";
    std::getline(std::cin , con.secret);

    return con;
}
