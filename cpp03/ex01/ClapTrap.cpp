#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap copy constructed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints -= amount;
    if (_hitPoints < 0) _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << std::endl;
    }
}

int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}

std::string ClapTrap::getName() const
{
    return _name;
}
