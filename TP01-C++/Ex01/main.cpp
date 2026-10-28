#include "BankAccount.hpp"
#include <iostream>

int main() {
    std::cout << "=== Creation des comptes ===" << std::endl;
    BankAccount compte1("FR76123456789", 500.0);
    compte1.afficher();

    BankAccount compte2;
    compte2.afficher();

    std::cout << "\n=== Tests des depots ===" << std::endl;
    compte1.deposer(150.0);
    compte1.deposer(-50.0);

    std::cout << "\n=== Tests des retraits ===" << std::endl;
    compte1.retirer(200.0);
    compte1.retirer(1000.0);
    compte1.retirer(-10.0);

    std::cout << "\n=== Etat final ===" << std::endl;
    compte1.afficher();

    return 0;
}
