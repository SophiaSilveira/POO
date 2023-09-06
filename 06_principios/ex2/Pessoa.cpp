//Pessoa.cpp

#ifdef DEBUG
    #include <iostream>
#endif
#include "Pessoa.hpp"

Pessoa::Pessoa(string n){
    nome = n;

    #ifdef DEBUG
    cout << "+ Pessoa(" << nome << ") criada" << endl;
    #endif
}

Pessoa::~Pessoa(){
    #ifdef DEBUG
    cout << "- Pessoa(" << nome << ") destruida" << endl;
    #endif
}

void Pessoa::defineNome(string n){
    nome = n;
}

string Pessoa::obtemNome(){
    return nome;
}