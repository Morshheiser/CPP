#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    *this = other;
    std::cout << "Animal copy constructed" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "Animal destructed" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound" << std::endl;
}
