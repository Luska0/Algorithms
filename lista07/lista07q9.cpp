/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 6
9) Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando
quantas vezes a segunda string lida está contida dentro da primeira.
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string primeiraString, segundaString;

    cout << "Digite a primeira string: ";
    getline(cin, primeiraString);

    cout << "Digite a segunda string: ";
    getline(std::cin, segundaString);

    int cont = 0;//cont é o contador
    size_t pos = 0;//pos é a posição

    while ((pos = primeiraString.find(segundaString, pos)) != std::string::npos) {
        cont++;
        pos += segundaString.length();
    }

    cout << "A segunda string está contida na primeira string " << cont << " vezes." << endl;

    return 0;
}
