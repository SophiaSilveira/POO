// Cinema.cpp (Sophia Mendes da Silveira; 28 set. 2023)

#include <iostream>
#include <sstream>
#include <string>
#include "Cinema.hpp"

Cinema::Cinema() {
    numero = salas = 0;
    nome = "";

    #ifdef DEBUG
        cout << "+ Cinema( nº " << numero << ",  "<< nome <<" - sala " << salas << " - " << endereco.str() << ") criado" << endl;
    #endif
}

Cinema::Cinema(int n, string nm, Endereco &e, int s) {

    numero = n;
    nome = nm;
    endereco = e;
    salas = s;

    #ifdef DEBUG
        cout << "+ Cinema( nº " << numero << ",  "<< nome <<" - sala " << salas << " - " << endereco.str() << ") criado" << endl;
    #endif
}

Cinema::~Cinema() {
    #ifdef DEBUG
        cout << "- Cinema( nº " << numero << ",  "<< nome <<" - sala " << salas << " - " << endereco.str() << ") destruido" << endl;
    #endif
}

int Cinema::obtemNumero() const { return numero; }
string Cinema::obtemNome() const { return nome; }
Endereco Cinema::obtemEndereco() const { return endereco; }
int Cinema::obtemSalas() const { return salas; }

string Cinema::str() const {
    stringstream ss;

    ss << nome << " [ " << numero << "] " << endl << endereco.str() << endl << "Cinema(s): " << salas;

    return ss.str();
}

void Cinema::defineNumero(int n) { numero = n;}
void Cinema::defineNome(string nm) { nome = nm; }
void Cinema::defineEndereco(Endereco &e) { endereco = e; }
void Cinema::defineSalas(int s) { salas = s; }
  /*bool operator<(const Cinema &c) const;
  friend istream &operator>>(istream &in, Cinema &c);
  friend ostream &operator<<(ostream &out, const Cinema &c);*/