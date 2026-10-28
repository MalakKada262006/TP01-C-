#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>
#include <iostream>

class BankAccount {
public:
    BankAccount();
    BankAccount(const std::string& numero, double soldeInitial = 0.0);

    void deposer(double montant);
    bool retirer(double montant);
    void afficher() const;

    std::string getNumero() const;
    double getSolde() const;

private:
    std::string m_numero;
    double m_solde;
};

#endif
