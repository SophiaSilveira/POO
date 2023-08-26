/*
Nome Arquivo: Exercicio013
Nome Autor: Sophia Mendes da Silveira
Finalidade do progrmama: ler um numero ımpar n e mostre uma saıda em que aparecem: 
na primeira linha, os numeros de 1 ate n;
na segunda linha, os numeros de 2 ate n-1 alinhados com os mesmos valores da linha de cima; 
na terceira linha, os numeros de 3 ate n-2, alinhados com os mesmos valores da linha de cima; 
e assim por diante, ate que na ultima linha aparec¸a apenas o valor (n+1)/2, alinhado com o valor (n+1)/2 da linha de cima
Data de criação: 19/08/2023
*/
#include <iostream>

using namespace std;

void imprimeValor(int start, int final){
    for(int i = 1; i <= final; i++){
        if(i < start) cout << "  ";
        else cout << i << " ";
    }
    cout << endl;
    if((start + 1) == (final + 1)) return;
    imprimeValor(start + 1, final -1);
}

int main(){
    int n = 0;

    while((n % 2) == 0)
    cin >> n;
    
    imprimeValor(1, n);

   return 0;
}
