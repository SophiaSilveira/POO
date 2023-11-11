/*
4 Escreva um programa que recebe um vetor de tamanho 100 de números reais. Depois,
usando ponteiros, inicialize o vetor com números quaisquer (aleatórios). Depois, usando
aritmética de ponteiros, calcule a média apenas dos números que se encontram em índices
pares do vetor (começando do zero).
*/

#include <iostream>

using namespace std;

int main(){
    int *vet = new int[100];
    double media = 0.0;
    int soma = 0, qtd = 0;

    for(int i = 0; i < 100; i++, vet++){
        *vet = (i *2) + 6;
    }


    for(int i = 0; i < 100; i + 2, vet+2){
        soma += *vet;
        qtd++;
    }

    media = soma / qtd;

    cout << media;

    return 0;
}