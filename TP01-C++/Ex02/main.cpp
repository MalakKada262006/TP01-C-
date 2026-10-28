#include "Book.hpp"
#include "Library.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    Library maBibliotheque;

    Book livre1("Les Misérables", "Victor Hugo", "978-2070409181", 1862);
    Book livre2("Le Petit Prince", "Antoine de Saint-Exupéry", "978-2070612758", 1943);
    Book doublon("Autre version", "Victor Hugo", "978-2070409181", 2000); // Même ISBN que livre1

    std::cout << "=== Ajout des livres ===" << std::endl;
    maBibliotheque.ajouterLivre(livre1);
    maBibliotheque.ajouterLivre(livre2);

    maBibliotheque.ajouterLivre(doublon);

    std::cout << "\n=== Liste du catalogue ===" << std::endl;
    maBibliotheque.listerLivres();

    std::cout << "\n=== Recherche par ISBN ===" << std::endl;
    std::string isbnRecherche = "978-2070612758";
    const Book* trouve = maBibliotheque.trouverParISBN(isbnRecherche);
    if (trouve != nullptr) {
        std::cout << "Livre trouvé : ";
        trouve->afficher();
    } else {
        std::cout << "Livre introuvable.\n";
    }

    const Book* introuvable = maBibliotheque.trouverParISBN("000-0000000000");
    if (introuvable == nullptr) {
        std::cout << "[Info] Test réussi : ISBN inconnu non trouvé.\n";
    }

    return 0;
}
