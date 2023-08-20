/*
Nome Arquivo: Exercicio011
Nome Autor: Sophia Mendes da Silveira
Finalidade do progrmama: ler o numero de colunas e linhas da matriz, ler a entrada para preencher a matriz, 
depois verificar a matriz e trocar os números impares por seus respectivo modulos
Data de criação: 19/08/2023
*/
#include <iostream>

using namespace std;

int main(){

    int lin, col, ent;
    while(lin <= 0 || lin > 10 || col <= 0 || col > 10){
        cin >> lin >> col;
    }

    int ** mat = new int*[lin];
    
   for (int i = 0; i < lin; i++) {
        mat[i] = new int[col];
   }

   for (int i = 0; i < lin; i++) {
        for (int k = 0; k < col; k++) {
            cin >> ent;
            if(ent < 0) mat[i][k] = ent * -1;
            else mat[i][k] = ent;
        }
   }

    for (int i = 0; i < lin; i++) {
        for (int k = 0; k < col; k++) {
            cout << mat[i][k] << " ";
        }
        cout << endl;
   }

   delete mat;
   return 0;

}
