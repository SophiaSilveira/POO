// Filme.cpp (Sophia Mendes da Silveira; 24 set. 2023)

#include <iostream>
#include <sstream>
#include "Filme.hpp"

Filme::Filme(int n, string t, int f, string e) {
    numero = n;
    titulo = t;
    faixaEtaria = f;
    estilo = e;

    #ifdef DEBUG
        cout << "+ Filme(" << titulo << " ["<< numero <<"] - " << faixaEtaria <<" anos - " << estilo << ") criado" << endl;
    #endif
}

Filme::~Filme() {
    #ifdef DEBUG
        cout << "- Filme(" << titulo << " ["<< numero <<"]" << " - " << faixaEtaria <<" anos - " << estilo << ") destruido" << endl;
    #endif
}

int Filme::obtemNumero() const { return numero; }

string Filme::obtemTitulo() const { return titulo; }

int Filme::obtemFaixaEtaria() const { return faixaEtaria; }

string Filme::obtemEstilo() const { return estilo; }

string Filme::str() const { //retorno das informações de forma padronizada
    stringstream ss;
    ss << titulo << " [" << numero << "] - ";
    
    //verifica se faiza etária é maior que 0, se sim adiciona a informação, se não adiciona LIVRE
    if(faixaEtaria < 1) ss  << "LIVRE";
    else ss << faixaEtaria << " anos";

    ss << " - " << estilo;
    return ss.str();
}

void Filme::defineNumero(int n) { numero = n; }

void Filme::defineTitulo(string t) { titulo = t; }

void Filme::defineFaixaEtaria(int f) { faixaEtaria = f; }

void Filme::defineEstilo(string e) { estilo = e; }

bool Filme::operator<(const Filme &f) const {
    return titulo < f.obtemTitulo();
}

istream &operator>>(istream &in, Filme &f) {// sobrecarga >>
    string aux;// auxiliar utilizada nos getlines para a verificaçao e conversão

    if(getline(in, aux))  f.numero = stoi(aux);

    getline(in, f.titulo);

    if(getline(in, aux)) f.faixaEtaria = stoi(aux);

    getline(in, f.estilo);
       
    return in;
}

ostream &operator<<(ostream &out,const Filme &f) {// sobrecarga <<
    out << f.obtemNumero() << endl;
    out << f.obtemTitulo() << endl;
    out << f.obtemFaixaEtaria() << endl;
    out << f.obtemEstilo() << endl;
    
    return out;
}