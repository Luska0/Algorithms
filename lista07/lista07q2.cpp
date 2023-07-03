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
 //Peça para o usuario digitar uma string qualquer.   
    cout << "Digite uma string: ";
    getline(cin, input);

    if (input.length() >= 4) {
        string fourLetters = input.substr(0, 4);
    //Exiba as quatro primeiras letras da string    
        cout << "As quatro primeiras letras são: " << fourLetters << endl;
    //Se a string digitada tiver menos do que 4 letras, exiba:
    } else {
        cout << "A string digitada é muito curta." << endl;
    }

    return 0;
}
