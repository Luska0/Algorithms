/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 13
13)  O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo
de substituição no qual cada letra é substituída por outra, que se apresenta N posições após ela
no alfabeto. Por exemplo, com uma troca de três posições (N=3), a letra A seria D, B seria E e
assim por diante. Escreva um programa que faça uso desse código de César para 03 posições.
Entre uma string e imprima a string codificada, e depois decodifique imprimindo a string original.
Exemplo:
a ligeira raposa marrom saltou sobre o cachorro cansado
d oljhlud udsrvd pduurp vdowrx vreuh r fdfkuur fdqvdgr
Como seria este código para um N genérico? Dica: considere o alfabeto circular, ou seja, ao
chegar na letra z, retorna para a letra a.
*/
#include <iostream>
#include <string>
using namespace std;
// Função para criptografar a string usando o código de César
string cifraCesar(const string& texto, int desloc) { //desloc é o deslocamento
    string resultado = texto;

    for (char& c : resultado) {
        // Verifica se o caractere é uma letra minúscula
        if (islower(c)) {
        // Aplica o deslocamento considerando o alfabeto circular
        c = 'a' + (c - 'a' + desloc) % 26;
        }
        // Verifica se o caractere é uma letra maiúscula
        else if (isupper(c)) {
        // Aplica o deslocamento considerando o alfabeto circular
        c = 'A' + (c - 'A' + desloc) % 26;
        }
    }

    return resultado;
}

    // Função para descriptografar a string usando o código de César
    string decifraCesar(const string& texto, int desloc) {
    // Inverte o deslocamento para obter a string original
    int deslocInverso = 26 - (desloc % 26);
    return cifraCesar(texto, deslocInverso);
}

int main() {
    string texto = "a ligeira raposa marrom saltou sobre o cachorro cansado";
    int desloc = 3;

    // Criptografa o texto
    string textoCriptografado = cifraCesar(texto, desloc);
    cout << "Texto criptografado: " << textoCriptografado << endl;

    // Descriptografa o texto
    string textoDescriptografado = decifraCesar(textoCriptografado, desloc);
    cout << "Texto descriptografado: " << textoDescriptografado << endl;

    return 0;
}
