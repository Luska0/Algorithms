/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 7
7) Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. 
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string input;
  //Peça para o usuario digitar uma string qualquer
    cout << "Digite uma string: ";
    getline(cin, input);
    
    string reversed = input;
    reverse(reversed.begin(), reversed.end());
   
  if (input == reversed) {
      cout << "A string é um palíndromo." << endl;
    } else {
      cout << "A string não é um palíndromo." << endl;
    }

    return 0;
}
