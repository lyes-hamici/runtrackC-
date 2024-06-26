#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    // Constructeur avec une liste d'initialisation
    Etudiant(const std::string& nom, const std::string& prenom, int age, int matricule)
        : nom(nom), prenom(prenom), age(age), matricule(matricule) {}

    // Méthodes pour accéder aux propriétés de l'étudiant
    const std::string& getNom() const {
        return nom;
    }

    const std::string& getPrenom() const {
        return prenom;
    }

    int getAge() const {
        return age;
    }

    int getMatricule() const {
        return matricule;
    }
};