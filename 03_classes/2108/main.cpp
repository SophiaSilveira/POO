#include <iostream>
#include "Contador.hpp"

using namespace std;

Contador c7(1000);

void funcao(){
    Contador c8(-10);
}

int main() {
    Contador c1, c2(10);
    //Contador c3(); //protótippo e não objeto
    //Contador *c4;//ponteiro para objeto
    Contador *c5 = new Contador(100);

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    delete c5;
    if(true){
        Contador c6(1000);
        c6.incrementa();
        funcao();
    }

    c1.incrementa();
    c2.incrementa();

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    c1.defineValor(55);
    c2.defineValor(65);

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;

    c1.zera();
    c2.zera();

    cout << "c1: " << c1.obtemValor() << endl;
    cout << "c2: " << c2.obtemValor() << endl;
    cout << "Contador::DEFAULT = " << Contador::DEFAULT << endl;

    cout << "C5 = " << c5->DEFAULT << endl;
    

    return 0;
}