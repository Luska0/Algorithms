/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 2
2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Digite uma string: ";
    getline(std::cin, input);

    if (input.length() >= 4) {
        string fourLetters = input.substr(0, 4);
        cout << "As quatro primeiras letras são: " << fourLetters << endl;
    } else {
        cout << "A string digitada é muito curta." << endl;
    }

    return 0;
}
