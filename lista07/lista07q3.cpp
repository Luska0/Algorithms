/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 3
3) Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela
possui.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
  //Peça para o usuario digitar uma string qualquer
    cout << "Digite uma string: ";
    getline(cin, input);

    int caracteres = 0;
    for (char c : input) {
        caracteres++;
    }
  //Exiba quantos cacaracteres possui na string digitada 
    cout << "A string possui: " << caracteres << " caracteres." << endl;

    return 0;
}
