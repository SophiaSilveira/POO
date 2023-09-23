#include <iostream>
#include <string>
#include "Pessoa.hpp"

int main() {
    Pessoa p;
    
    p.defineNome("Joao da Silva");
    p.defineIdade(20);
    p.definePeso(75.5);
    for (int i=0; i<5; ++i) {
        p.fazAniversario();
        p.engorda(0.1 + i/100.0);
    }
    cout << p.obtemNome() << endl;
    cout << p.obtemIdade() << endl;
    cout << p.obtemPeso() << endl;
    return 0;
}