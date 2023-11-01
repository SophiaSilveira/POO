/*
Escreva um programa explorando STL que declara um vetor de inteiros. Armazene no
vetor os 5 valores informados e então imprima o vetor de elementos com o comando
cout.
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vetor;
    int n;

    for(int i = 0; i < 5; i++){
        cin >> n;
        vetor.push_back(n);
    }

    for(int i = 0; i < 5; i++){
        cout << endl << vetor[i];
    }

    return 0;
}