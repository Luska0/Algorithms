/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 8
8) Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
se a segunda string lida está contida dentro da primeira. (estude a função strstr() que realiza
esta tarefa)
*/
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char primeiraString[100];
    char segundaString[100];
    
  cout << "Digite a primeira string: ";
    cin.getline(primeiraString, sizeof(primeiraString));

    cout << "Digite a segunda string: ";
    cin.getline(segundaString, sizeof(segundaString));
//A função strstr() é usada para verificar se a segunda string está contida na primeira, nullptr representa um valor de ponteiro nulo.
    if (strstr(primeiraString, segundaString) != nullptr) { 
        cout << "A segunda string está contida na primeira string." << endl;
    } else {
        cout << "A segunda string não está contida na primeira string." << endl;
    }

    return 0;
}
