#include "ScavTrap.hpp"

int main()
{
    ClapTrap alpha("Alpha");
    ScavTrap bravo("Bravo");

    alpha.attack("Bravo");
    bravo.takeDamage(alpha.getAttackDamage());
    bravo.guardGate();

    ScavTrap copyBravo(bravo);
    copyBravo.attack("Alpha");

    return 0;
}
