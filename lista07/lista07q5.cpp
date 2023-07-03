/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 5
5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na
mesma variável. Em seguida, imprima a string invertida.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    //Lê a string que foi digitada
    cout << "Digite uma string qualquer: ";
    getline(cin, str);
    //Faz a inversão da string
    int length = str.length();
    int indiceAux = length;
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[indiceAux - 1 - i];
        str[indiceAux - 1 - i] = temp;
    }
    // Imprime a string invertida
    cout << "String invertida: " << str << endl;
    
    return 0;
}