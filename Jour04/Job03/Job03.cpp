#include <iostream>
#include <cstring>

void inverserChaine(char* chaine) {
    int longueur = strlen(chaine);
    char* debut = chaine;
    char* fin = chaine + longueur - 1;
    while (debut < fin) {
        char temp = *debut;
        *debut = *fin;
        *fin = temp;
        ++debut;
        --fin;
    }
}

int main() {
    const int taille_max = 100;
    char chaine[taille_max];
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(chaine, taille_max);
    inverserChaine(chaine);
    std::cout << "La chaine inversee est : " << chaine << std::endl;
    return 0;
}