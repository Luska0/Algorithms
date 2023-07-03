/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 1
1)  Faça um programa que leia uma string e a imprima na tela.
*/
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
