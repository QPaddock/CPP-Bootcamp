#include "phonebook.hpp"

void search_con(Contact con[7], int j)
{
    int i;

    i = 0;

    while (i < j)
    {
        std::cout << std::right;
        std::cout << i << std::setw(10);
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
            std::cout << std::right << con[i].first.substr(0, 9);
            std::cout << ".|";
        }

        if (con[i].first.length() < 11)
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].last;
            std::cout << '|';
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].last.substr(0, 9);
            std::cout << ".|";
        }       
        if (con[i].first.length() < 11)
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].nick;
            std::cout << "|\n";
        }
        else
        {
            std::cout << std::setw(10);
            std::cout << std::right << con[i].nick.substr(0, 9);
            std::cout << ".|\n";
        }
        i++;
    }
    int k = 1;

    while (k == 1)
    {
        std::cout << "Select Index:\n";
        std::cin >> i;
        if (i >= 0 && i <= j)
        {
            std::cout << con[i].first + '\n';
            std::cout << con[i].last + '\n';
            std::cout << con[i].nick + '\n';
            std::cout << con[i].login + '\n';
            std::cout << con[i].postal + '\n';
            std::cout << con[i].email + '\n';
            std::cout << con[i].cell + '\n';
            std::cout << con[i].dob + '\n';
            std::cout << con[i].meal + '\n';
            std::cout << con[i].underwear + '\n';
            std::cout << con[i].secret + '\n';
            k = 0;
        }
        else
        {
            std::cout << "Select VALID Index!\n";
        }
        
    }
}