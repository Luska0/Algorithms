/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 10
10) Escreva um programa que leia uma string do teclado e mostre um menu para o usuário
escolher se quer converter para maiúsculo ou minúsculo.
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
//Peça para o usuário digitar uma string
    cout << "Digite uma string: ";
    getline(cin, input);

    int opcao;
    cout << "Escolha uma opção:" << endl;
    cout << "1. Converter para maiúsculo" << endl;
    cout << "2. Converter para minúsculo" << endl;
    cout << "Opção: ";
    cin >> opcao;
//Converta para maiúsculo se o usuário escolher a opção 1
    if (opcao == 1) {
        for (char& c : input) {
            c = toupper(c);
        }
 //Senão, se o usuário escolher a opção 2, concerta para minúsculo 
   } else if (opcao == 2) {
        for (char& c : input) {
            c = tolower(c);
        }
    } else {
        cout << "Essa opção é inválida!" << endl;
        return 0;
    }

    cout << "String convertida: " << input << endl;

    return 0;
}
