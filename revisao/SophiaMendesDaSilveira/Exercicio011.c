/*Nome Arquivo: Exercicio011
Nome Autor: Sophia Mendes da Silveira
Finalidade: conferir um palindromo
Data de criação: 09/08/2023*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int palindromo(char *palavra);

int palindromo(char *palavra) {
  // Coloque a sua implementacao aqui...
  int tam = strlen(palavra) -1;
  
  for(int i = 0; i <= tam; i++){
    if(palavra[i] != palavra[tam]) return 0;
    tam--;
  } 

  return 1;
}

int main() {
  char palavra[MAX+1];
  // Leitura
  fgets(palavra, MAX, stdin);
  // Remove '\n' do final da cadeia de caracteres
  int tam = 0;
  while ( palavra[tam] != '\0' ) ++tam;
  if ( tam > 0 && palavra[tam-1] == '\n' ) --tam; // Unix e Windows
  if ( tam > 0 && palavra[tam-1] == '\r' ) --tam; // Windows
  palavra[tam] = '\0';
  // Chama a funcao int palindromo(char *palavra)
  if ( palindromo(palavra) ) printf("PALINDROMO\n");
  else printf("-\n");
  return 0;
}