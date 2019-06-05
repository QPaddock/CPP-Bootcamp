#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Pony {
    private:
        std::string height;
        std::string colour;
        std::string name;

    public:
    Pony();
    ~Pony();
    static void ponyOnHeap();
    static void ponyOnTheStack();
};

#endif