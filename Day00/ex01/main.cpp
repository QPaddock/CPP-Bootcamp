#include <iostream>
#include <string>
#include "phonebook.hpp"

int main()
{
    Contact cont[8];
    int i;
    int j;
    std::string com;

    i = 1;
    j = 0;

    while (i == 1)
    {
        std::cout << "Enter ADD, SEARCH or EXIT:\n";
        std::getline(std::cin , com);

        if (com == "ADD")
        {
            if (j == 8)
            {
                std::cout << "Already 8 contacts\n";
            }
            else
            {
                cont[j] = add_con();
                j++;
            }
            
        }
        else if (com == "SEARCH")
        {
            search_con(cont, j);
        }
        else if (com == "EXIT")
        {
            std::cout << "Ending...";
            exit(EXIT_SUCCESS);
        }
        else
        {
            std::cout << "Please enter a valid command:\n";
        }
    }
    return (0);
}