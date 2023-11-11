#include<iostream>

using namespace std;

int main () {
    int * v = new int [10]; // 'v' eh um ponteiro para uma area que tem 10 inteiros
    v [0] = 10;

    for ( int i =1; i <10; ++ i)
        v[i] = v[i -1] + 1;

    for ( int i = 0; i < 10; i ++)
        cout << "v[" << i << "]: " << v[ i] << endl;

    cout << " Endereco de 'v ': " << *v << endl ; // imprime o endereco da area

    delete [] v;
    return 0;
}