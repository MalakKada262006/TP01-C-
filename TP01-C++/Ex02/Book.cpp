#include "Book.hpp"

Book::Book() : m_titre("Inconnu"), m_auteur("Inconnu"), m_isbn(""), m_annee(0) {}

Book::Book(const std::string& titre, const std::string& auteur,
           const std::string& isbn, int annee)
    : m_titre(titre), m_auteur(auteur), m_isbn(isbn), m_annee(annee) {}

std::string Book::getTitre() const { return m_titre; }
std::string Book::getAuteur() const { return m_auteur; }
std::string Book::getISBN() const { return m_isbn; }
int Book::getAnnee() const { return m_annee; }

void Book::afficher() const {
    std::cout << "Titre : " << m_titre << " | Auteur : " << m_auteur
              << " | ISBN : " << m_isbn << " | Année : " << m_annee << '\n';
}
