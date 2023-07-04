/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 12
12) Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j. Em
seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    int i, j;

    // Solicita a entrada da string S
    cout << "Digite a string S: ";
    getline(cin, S);

    // Solicita a entrada dos valores inteiros i e j
    cout << "Digite os valores inteiros i e j: ";
    cin >> i >> j;

    // Verifica se os valores de i e j são válidos
    if (i < 0 || j < 0 || i > j || j >= S.length()) {
        cout << "Valores inválidos de i e j." << endl;
        return 0;
    }

    // Imprime os caracteres contidos no segmento que vai de i a j
    cout << "Segmento de S que vai de i a j: ";
    for (int k = i; k <= j; k++) {
        cout << S[k];
    }
    cout << endl;

    return 0;
}
