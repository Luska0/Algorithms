/*Aluno: Lucas Emanoel Ribeiro Santana
  Turma: IF23
  Professor: Josenalde Barbosa de Oliveira
                  Lista de Exercícios 7
                        Questão 11
11) Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a
ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser
pago à vista.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomeda_mercadoria;
    float valor_total, desconto, valor_a_vista;
  //Peça para o usuario digitar o nome de sua mercadoria
    cout << "Digite o nome da mercadoria: ";
    getline (cin, nomeda_mercadoria);
  //Peça para o usuario digitar o valor total da mercadoria 
    cout << "Digite o valor total da mercadoria: ";
    cin >> valor_total;
  //Valor do desconto de 10%
    desconto = valor_total * 0.1;
  //Valor a vista depois do desconto 
    valor_a_vista = valor_total - desconto;

    cout << "Nome da mercadoria: " << nomeda_mercadoria << endl;
    cout << "Valor total da mercadoria: R$ " << valor_total << endl;
    cout << "Valor do desconto: R$ " << desconto << endl;
    cout << "Valor a ser pago à vista: R$ " << valor_a_vista << endl;

    return 0;
}
