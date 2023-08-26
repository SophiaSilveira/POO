/*
Nome Arquivo: Exercicio012
Nome Autor: Sophia Mendes da Silveira
Finalidade do progrmama: ler uma matriz quadrada de inteiros e imprimir o numero da linha que contém o menor elemento da matriz.
Data de criação: 19/08/2023
*/
#include <iostream>

using namespace std;

int main(){

    int tam = 0, menorN, linha = 0;
    while(tam <= 0 || tam > 10){
        cin >> tam;
    }
    
    int ** mat = new int*[tam];

    
   for (int i = 0; i < tam; i++) {
        mat[i] = new int[tam];
        for (int k = 0; k < tam; k++) {
            cin >> mat[i][k];
        }
   }
     
    menorN = mat[0][0];

    for (int i = 0; i < tam; i++) {
        for (int k = 0; k < tam; k++) {
           if(mat[i][k] < menorN){
            linha = i;
           }
        }
   }

    cout << linha << endl;

  for (int i = 0; i < tam; i++) { 
            delete[] mat[i];
   }

   delete[] mat;
   return 0;
}
