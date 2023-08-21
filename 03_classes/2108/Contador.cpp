//Contador.cpp

#include <iostream>
#include "Contador.hpp"


Contador::Contador(int v){
    valor = v;
    
    #ifdef DEBUG
    cout << "+Contador(" << valor << ") criado..." << endl;
    #endif
    
}
    
Contador::~Contador(){      
    #ifdef DEBUG
    cout << "-Contador( " << valor << ") destruido..." << endl;
    #endif
}

int Contador::obtemValor() { 
    return valor;
    
    #ifdef DEBUG
    cout << "+Contador(" << valor << ") visto..." << endl;
    #endif
}
        
void Contador::incrementa() {
    ++valor;
    
    #ifdef DEBUG
    cout << "+Contador(" << valor << ") incrementado..." << endl;
    #endif
}

void Contador::defineValor(int v){ 
    valor = v;
    
    #ifdef DEBUG
    cout << "+Contador(" << valor << ") definifo..." << endl;
    #endif
}

    
void Contador::zera(){ //Mutator
    valor = DEFAULT;
    
   #ifdef DEBUG
   cout << "+Contador(" << valor << ") zerado..." << endl;
   #endif
}

