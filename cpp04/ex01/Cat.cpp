#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}
