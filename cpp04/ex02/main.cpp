#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound(); // Woof!
    i->makeSound(); // Meow!

    delete j;
    delete i;

    // Deep copy test
    Dog dog1;
    Dog dog2 = dog1; 
    dog2.getBrain()->setIdea(0, "Sleep");
    std::cout << "dog1 brain idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 brain idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    return 0;
}
