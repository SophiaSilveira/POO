#include <iostream>

using namespace std ;
int main () {
    char frase [30];

    cout << " Digite uma frase : " << endl ;
    cin . getline ( frase , 30) ;

    cout << " Frase digitada : " << frase << endl ;
    // OU
    string texto ;

    cout << " Digite algum texto : " << endl ;
    getline ( cin , texto );
    cout << " Texto digitado : " << texto << endl ;
    
    return 0;
}