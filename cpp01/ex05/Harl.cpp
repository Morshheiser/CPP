#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug() {
    std::cout
        << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
        << std::endl;
}

void Harl::info() {
    std::cout
        << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! "
        << "If you did, I wouldn't be asking for more!"
        << std::endl;
}

void Harl::warning() {
    std::cout
        << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started "
        << "working here just last month."
        << std::endl;
}

void Harl::error() {
    std::cout
        << "This is unacceptable! I want to speak to the manager now."
        << std::endl;
}

void Harl::complain(std::string level) 
{
    static const std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    typedef void (Harl::*Action)();

    
    Action actions[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    int i = 0;
    while (i < 4)
    {
        if (level == levels[i]) {
            (this->*actions[i])();
            return;
        }
        i++;
    }

    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
