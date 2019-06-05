#include "pony.hpp"

void Pony::ponyOnHeap()
{
    Pony* pony = new Pony();
    pony->name = "Sally";
    pony->height = "200m";
    pony->colour = "Turquoise";

    std::cout << "Pony up Boooiiii! xD\n";
    std::cout << "Name:     " << pony->name;
    std::cout << "\nHeight:   " << pony->height;
    std::cout << "\nColour:   " << pony->colour;

    delete pony;
}

void Pony::ponyOnTheStack()
{
    Pony pony2 = Pony();

    pony2.name = "Golden Steed";
    pony2.height = "300m";
    pony2.colour = "Bronze";

    std::cout << "Pony up Boooiiii! xD\n";
    std::cout << "Name:     " << pony2.name;
    std::cout << "\nHeight:   " << pony2.height;
    std::cout << "\nColour:   " << pony2.colour;
}

Pony::Pony()
{
    std::cout << "\nPony Created\n";    
}

Pony::~Pony()
{
    std::cout << "\nPony Euthanised, goodbye " << this->name << ". :'(\n";
}