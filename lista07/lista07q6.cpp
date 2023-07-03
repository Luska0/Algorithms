/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 6
6)  Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um
caractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere. Ao
final, imprima a nova string e o número de vogais que ela possui.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra;
    char caractere;
    int cont = 0; //cont é o contador
    //Peça para digitar uma palavra
    cout << "Digite uma palavra qualquer: ";
    getline(cin, palavra);
    //Peça para digitar um caractere
    cout << "Digite um caracterer qualquer: ";
    cin >> caractere;

    //Conte as vogais e substitua
    for (char& c : palavra) {
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cont++;
            c = caractere;
        }
    }
    //Fale a nova palavra gerada com o caractere
    cout << "Nova palavra: " << palavra << endl;
    //Fale quantas vogais tem na palavra
    cout << "Número de vogais: " << cont << endl;

    return 0;
}

