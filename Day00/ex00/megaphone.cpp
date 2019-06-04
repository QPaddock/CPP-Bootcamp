#include <iostream>

char* to_upper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = str[i];
        }
        i++;
    }
    str[i] = '\0';
    return str;
}

int main(int ac, char** av)
{
    char* str;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << '\n';
    }
    else
    {
        int i = 1;
        while (i < ac)
        {
            str = to_upper(av[i]);
            std::cout << str;
            i++;
        }
        std::cout << '\n';
    }
    return (0);
}