#include <iostream>
#include <iomanip>
#include <string>

int main(int ac, char **av) {
    if (ac > 2 || ac == 1) {
        std::cout << "Invalid number of arguments.\n";
    }
    else {
        std::string str(av[1]);
        int i;
        bool is_valid;
        double d;
        float f;
        char c;

        try {
            f = std::stof(str);
            is_valid = true;
        }
        catch(std::exception& wha) {
            if (std::strlen(av[1]) > 1) {
                is_valid = false;
            }
            else {
                i = static_cast<int>(*av[1]);
                f = static_cast<float>(i);
                is_valid = true;
            }
        }
        if (is_valid == false) {
            std::cout << "WTF! I can't deal with this🖕\n";
            return (0);
        }
        d = static_cast<double>(f);
        c = static_cast<char>(f);
        i = static_cast<int>(f);

        if (f < 32 || f >= 127) {
            std::cout << "char: " << "Non displayable" << '\n';
            std::cout << "int: " << i << '\n';
        }
        else if (str == "nan" || str == "nanf") {
            std::cout << "char: " << "Impossible" << '\n';
            std::cout << "int: " << "Impossible" << '\n';
        }

        else {
            std::cout << "char: '" << c << "'\n";
            std::cout << "int: " << i << '\n';
        }
        

        std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f\n";
        std::cout << "double: " << d << '\n';
    }
    return (0);
}