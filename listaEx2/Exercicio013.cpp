#include <iostream>

using namespace std;

int main(){

    int tam = 0, menorN, linha = 0;
    while(tam % 2 == 0){
        cin >> tam;
    }
    
    int ** mat = new int*[tam];

    
   for (int i = 0; i < tam; i++) {
        mat[i] = new int[tam];
   }

     for (int i = 0; i < tam; i++) {
        for (int k = 0; k < tam; k++) {
            mat[i][k] = i;
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

   delete mat;
   return 0;

}
