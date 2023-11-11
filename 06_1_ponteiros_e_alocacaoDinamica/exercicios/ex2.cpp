/*
2 Escreva um programa que recebe um vetor de números inteiros. Esse vetor de 10 posições
deve ser criado de forma dinâmica e inicializado de 1 a 10. Ao final, deve-se imprimir na
tela usando aritmética de ponteiros.
*/

#include<iostream>

int main(){
    int *vet = new int[10];

    for(int i = 0; i < 10; i++)
        vet[i] = i + 1;

    for(int i = 0; i < 9; i++)
        std::cout << *(vet+i) << std:: endl;

    return 0;
}