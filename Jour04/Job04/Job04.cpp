#include <iostream>

int main() {
    // Créer trois variables contenant des entiers
    int var1 = 10;
    int var2 = 12;
    int var3 = 14;

    // Créer trois pointeurs, un pointeur vers chaque variable
    int *norman = &var1;
    int *megapyx = &var2;
    int *need_backup = &var3;

    // Accéder à la valeur des variables via les pointeurs en utilisant l'opérateur de déréférencement (*)
    std::cout << "La valeur de var1 est : " << *norman << std::endl;
    std::cout << "La valeur de var2 est : " << *megapyx << std::endl;
    std::cout << "La valeur de var3 est : " << *need_backup << std::endl;

    // Modifier les valeurs pointées par les pointeurs
    *norman = 17;
    *megapyx = 17;
    *need_backup = 17;

    // Afficher les nouvelles valeurs des variables
    std::cout << "La nouvelle valeur de var1 est : " << var1 << std::endl;
    std::cout << "La nouvelle valeur de var2 est : " << var2 << std::endl;
    std::cout << "La nouvelle valeur de var3 est : " << var3 << std::endl;

    return 0;
}
