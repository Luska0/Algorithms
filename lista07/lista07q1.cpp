#include <iostream>
#include <string>
using namespace std;
int main() {
  string inputString;
  //Peça para o usuário digitar uma string qualquer  
    cout << "Digite uma string: ";
    getline(cin, inputString);
   //Exiba a string que foi digitada pelo usuário 
    cout << "A string digitada foi: " <<    inputString << endl;

    return 0;
}
