#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    for (int i = 0; i < size; i++)
        delete animals[i];

   
    Dog dog1;
    Dog dog2 = dog1;
    dog1.getBrain()->setIdea(0, "Eat");
    dog2.getBrain()->setIdea(0, "Sleep");
    std::cout << "dog1 brain idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 brain idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
