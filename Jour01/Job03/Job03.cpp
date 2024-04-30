#include <iostream>

int exec_main(int a) {
    int i = a;
    
    while (i != 0) {
        std::cout << "Hello World" << std::endl;
        i--; 
    }
    
    return 0;
}



int main() {
    exec_main(8); 
    return 0;
}