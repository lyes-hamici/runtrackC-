#include "Animal.hpp"
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    // Instanciation de plusieurs chiens et chats
    Chien chien1;
    Chien chien2;
    Chien chien3;

    Chat chat1;
    Chat chat2;

    // Affichage du nombre total d'animaux
    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
