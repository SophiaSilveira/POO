/*Nome Arquivo: Exercicio015
Nome Autor: Sophia Mendes da Silveira
Finalidade: le 30 números e confere  se dois numeros consectivos somados dão como resultado o valor do 3º numero da sequencia
Data de criação: 10/08/2023*/

#include <stdio.h>

int encontra_numero(int vet[], int tam) {
  int qtd = 0;

  for(int i = 0;  i < tam - 2; i++){
    if(vet[i] + vet[i+1] == vet[i+2])
      qtd++;
  }

  return qtd;
}

int main() {
  int vet[30], tam;

  for(tam = 0; tam < 30; tam++){
    scanf("%d", &vet[tam]);
  }

  printf("%d", encontra_numero(vet, tam));

  return 0;
}
