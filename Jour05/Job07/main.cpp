#include "Contact.hpp"

int main() {
    // Création de plusieurs objets Contact avec des données différentes
    Contact contact1("ZT Abarax", 123456);
    Contact contact2("ZT Myrturtle", 654321);
    Contact contact3("ZT Zeyhelm", 987654);

    // Copies de chaque objet créé
    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;
    Contact copieContact3 = contact3;

    // Modification du numéro de chaque copie
    copieContact1.modifierNumero(111111);
    copieContact2.modifierNumero(222222);
    copieContact3.modifierNumero(333333);

    // Affichage des informations de chaque objet
    contact1.afficherInfos();
    copieContact1.afficherInfos();

    contact2.afficherInfos();
    copieContact2.afficherInfos();

    contact3.afficherInfos();
    copieContact3.afficherInfos();

    return 0;
}
