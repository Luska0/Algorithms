/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 14
14) Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem em
que elas aparecem num dicionário.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  //Solicitando a entrada das strings
    string str1, str2;

    // Leia as strings digitadas pelo usuario
    cout << "Digite a primeira string: ";
    getline(cin, str1);

    cout << "Digite a segunda string: ";
    getline(cin, str2);

    //Organiza as strings em ordem alfabética
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    //Exibe as strings em ordem alfabética
    cout << "Strings em ordem alfabética:\n";
    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}
