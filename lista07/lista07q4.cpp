/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 4
4)  Faça um programa que leia uma string e a imprima de trás para a frente.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
  //Peça para o usuario digitar uma string qualquer
    cout << "Digite uma string: ";
    getline(cin, input);
  //Exiba a string invertida
    cout << "String invertida: ";
  for (int i = input.length() - 1; i >= 0; i--) {
    cout << input[i];
    }

    cout << endl;

    return 0;
}
