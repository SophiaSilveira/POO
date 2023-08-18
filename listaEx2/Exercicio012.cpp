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
   }

     for (int i = 0; i < tam; i++) {
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

   delete mat;
   return 0;

}
