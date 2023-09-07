#include <iostream>
#include "Elevador.hpp"

using namespace std ;

int main(){
    Elevador e(8, 10);

    e.entra();
    cout << "Entrou = " << e.obtemPessoas() << endl;

    e.sobe();
    cout << "Subiu = " << e.obtemAndar() << endl;

    e.sai();
    cout << "Saiu = " << e.obtemPessoas() << endl;

    e.desce();
    cout << "Desceu = " << e.obtemAndar() << endl;

    cout << "totalAndar = " << e.obtemTotal() << endl;
    cout << "Capacidades = " << e.obtemCapacidade() << endl;

return 0;
}