#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), brain(new Brain(*other.brain))
{
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}
