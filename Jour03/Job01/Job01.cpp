#include <iostream>
#include <cctype>
using namespace std;

int main() {

  string str = "vive la plateforme !";

  // Loop through each character and convert to uppercase
  for (char &ch : str) {
    ch = toupper(ch);
  }

  cout << str << endl;

  return 0;
}
