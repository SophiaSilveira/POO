// Filme.cpp (Sophia Mendes da Silveira; 24 set. 2023)

#include <iostream>
#include <sstream>
#include "Filme.hpp"

Filme::Filme(int n, string t, int f, string e){
    numero = n;
    titulo = t;
    faixaEtaria = f;
    estilo = e;
}

Filme::~Filme(){
    #ifdef DEBUG
        cout << "- Filme(" << titulo << " ["<< numero <<"]" << " - " << faixaEtaria <<" anos - " << estilo << ") destruido" << endl;
    #endif
}

int Filme::obtemNumero() const{
    return numero;
}

string Filme::obtemTitulo() const{
    return titulo;
}

int Filme::obtemFaixaEtaria() const{
    return faixaEtaria;
}

string Filme::obtemEstilo() const{
    return estilo;
}

string Filme::str() const{
    stringstream ss;
    ss << titulo << " [" << numero << "] -" << faixaEtaria << " anos" << " - " << estilo;
    return ss.str();
}

void Filme::defineNumero(int n){
    numero = n;
}

void Filme::defineTitulo(string t){
    titulo = t;
}

void Filme::defineFaixaEtaria(int f){
    faixaEtaria = f;
}

void Filme::defineEstilo(string e){
    estilo = e;
}

bool Filme::operator<(const Filme &f) const{
    if(titulo != f.obtemTitulo()) return false;

    return true;
}

istream &operator>>(istream &in,Filme &f){
    in >> f.titulo;
    in >> f.numero;
    in >> f.faixaEtaria;
    in >> f.estilo;

    return in;
}

ostream &operator<<(ostream &out,const Filme &f){
    out << f.obtemTitulo();
    out << f.obtemNumero();
    out << f.obtemFaixaEtaria();
    out << f.obtemEstilo();
    return out;
}