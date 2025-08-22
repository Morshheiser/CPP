#include "ClapTrap.hpp"

int main()
{
    ClapTrap alpha("Alpha");
    ClapTrap bravo("Bravo");

    alpha.attack("Bravo");
    bravo.takeDamage(alpha.getAttackDamage());
    bravo.beRepaired(5);

    ClapTrap copyAlpha(alpha);
    copyAlpha.attack("Bravo");

    return 0;
}

