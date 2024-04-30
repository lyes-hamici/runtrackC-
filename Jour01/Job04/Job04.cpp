#include <iostream>

int exec_main(int a,int b) {
    
     return a + b;
}



int main() {
    int result = exec_main(8, 8);
    std::cout << "Le résultat est : " << result << std::endl; 
    return 0;
}