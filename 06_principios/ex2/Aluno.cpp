//Aluno.cpp


#ifdef DEBUG
    #include <iostream>
#endif

#include <sstream>

#include "Aluno.hpp"

Aluno::Aluno(string n, int m){
    p = new Pessoa(n);
    matricula = m;

    #ifdef DEBUG
    cout << "+ Aluno matricula(" << matricula << ") criada / + Aluno p(" << p->obtemNome() << ") criado" << endl;
    #endif
}

Aluno::~Aluno(){
   
    #ifdef DEBUG
    cout << "- Aluno matricula(" << matricula << ") destruido / - Aluno p(" << p->obtemNome() << ") destruido" << endl;
    #endif

    delete p;
}

int Aluno::obtemMatricula(){
    return matricula;
}

void Aluno::defineMatricula(int m){
    matricula = m;
}


string Aluno::obtemNome(){
    return p->obtemNome();
}

void Aluno::defineNome(string n){
    p->defineNome(n);
}

string Aluno::str(){
    stringstream ss;
    ss << p->obtemNome() << " (" << matricula << ")";
    return ss.str();
}