#include "Harl.hpp"
#include <iostream>

// Programa de teste simples:
// - Se passar 1 argumento, chama só aquele nível.
// - Se não passar, demonstra todos os níveis.
int main(int argc, char *argv[]) {
    Harl harl;

    if (argc == 2) {
        harl.complain(argv[1]);
        return 0;
    }

    // Demonstração: todos os níveis em ordem
    const char* demos[] = { "DEBUG", "INFO", "WARNING", "ERROR", "UNKNOWN" };
    for (int i = 0; i < 5; ++i) {
        std::cout << ">>> complain(\"" << demos[i] << "\")" << std::endl;
        harl.complain(demos[i]);
        std::cout << std::endl;
    }

    std::cerr << "Usage: " << argv[0] << " <DEBUG|INFO|WARNING|ERROR>" << std::endl;
    return 0;
}
