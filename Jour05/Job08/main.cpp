#include "Animal.hpp"
#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    // Instanciation d'un chien
    Chien monChien;
    std::cout << "Chien : ";
    monChien.crier();
    std::cout << "Chien : ";
    monChien.manger();
    
    // Instanciation d'un chat
    Chat monChat;
    std::cout << "Chat : ";
    monChat.crier();
    std::cout << "Chat : ";
    monChat.manger();
    
    return 0;
}
