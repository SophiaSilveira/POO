#include <iostream>

using namespace std;
int main () {
    int x ;
    cout << " Digite um inteiro : ";
    cin >> x;
    
    if ( cin.bad () ) {
        cerr << " Houve uma falha na leitura !" << endl ;
        return 1;
    }
    if ( cin.fail () ) {
        cerr << " Dado digitado incompativel com o dado esperado !" << endl ;
        return 1;
    }
    cout << endl ;
    cout << " Valor lido : " << x << endl ;
    return 0;
}