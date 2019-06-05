#include "phonebook.hpp"

void search_con(Contact con[7], int j)
{
    int i;

    i = 0;

    std::cout << std::setw(10);
    std::cout << "Index";
    std::cout << '|';

    std::cout << std::setw(10);
    std::cout << "First Name";
    std::cout << '|';

    std::cout << std::setw(10);
    std::cout << "Last Name";
    std::cout << '|';

    std::cout << std::setw(10);
    std::cout << "Nickname";
    std::cout << "|\n";

    while (i < j)
    {
        std::cout << std::setw(10);
        std::cout << std::right << i;
        std::cout << '|';

        if (con[i].first.length() < 11)
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].first;
            std::cout << '|';
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].first.substr(0, 9) + '.';
            std::cout << "|";
        }

        if (con[i].last.length() < 11)
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].last;
            std::cout << '|';
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].last.substr(0, 9) + '.';
            std::cout << "|";
        }       
        if (con[i].nick.length() < 11)
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].nick;
            std::cout << "|\n";
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].nick.substr(0, 9) + '.';
            std::cout << "|\n";
        }
        i++;
    }
    int k = 1;

    while (k == 1)
    {
        std::string ans;
        std::cout << "Select Index:\n";
        std::getline(std::cin, ans);
        if (ans.length() == 1)
        {
            if (isdigit(ans[0]))
            {
                i = std::stoi(ans);
            }
            else
            {
                i = 20;
            }
            
        }
        else
        {
            i = 20;
        }
        
        
        if (i >= 0 && i <= j)
        {
            std::cout << '\n';
            std::cout << "First Name:       " << con[i].first + '\n';
            std::cout << "Last Name:        " << con[i].last + '\n';
            std::cout << "Nickname:         " << con[i].nick + '\n';
            std::cout << "Login:            " << con[i].login + '\n';
            std::cout << "Postal Address:   " << con[i].postal + '\n';
            std::cout << "Email Address:    " << con[i].email + '\n';
            std::cout << "Phone Number:     " << con[i].cell + '\n';
            std::cout << "Birthday:         " << con[i].dob + '\n';
            std::cout << "Favourite Meal:   " << con[i].meal + '\n';
            std::cout << "Underwear Color:  " << con[i].underwear + '\n';
            std::cout << "Darkest Secret:   " << con[i].secret + '\n';
            std::cout << '\n';
            k = 0;
        }
        else
        {
            std::cout << "Select VALID Index!\n";
        }
        
    }
}