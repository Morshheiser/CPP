#include "ScavTrap.hpp"

// Construtor padrão
ScavTrap::ScavTrap() {
    _name = "Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

// Construtor com nome
ScavTrap::ScavTrap(const std::string& name) {
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "ScavTrap copy constructed" << std::endl;
}

// Operador de atribuição
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

// Destrutor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed" << std::endl;
}

// Ataque próprio
void ScavTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

// Habilidade especial
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
