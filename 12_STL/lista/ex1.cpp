/*1. Escreva um programa explorando STL que declara um vetor de inteiros. Armazene no
vetor os 5 valores informados e então imprima o vetor de elementos com o comando
cout.
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector <int> v1;

    for(int i = 0; i < 5; ++i)
        v1.push_back(i);
    
    for(int i = 0; i < 5; ++i)
        cout << v1[i] << endl;

    return 0;
}