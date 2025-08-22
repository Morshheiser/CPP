#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap alpha("Alpha");
    ScavTrap bravo("Bravo");
    FragTrap charlie("Charlie");

    std::cout << std::endl;

    alpha.attack("Bravo");
    bravo.takeDamage(alpha.getAttackDamage());
    bravo.guardGate();

    charlie.attack("Alpha");
    charlie.highFivesGuys();

    FragTrap copyCharlie(charlie);
    copyCharlie.attack("Bravo");

    std::cout << std::endl;
    return 0;
}
