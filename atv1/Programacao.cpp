// Programacao.cpp (Sophia Mendes da Silveira; 30 set. 2023)

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include "Programacao.hpp"

Programacao::Programacao(Cinema *c, int s, Filme *f, int t, string h){
    cinema = c;
    sala = s;
    filme = f;
    tipoDeExibicao = t;
    horarios = h;

    #ifdef DEBUG
        cout << "+ Programacao( cinema, sala " << sala <<", filme, tipo de exibicao " << tipoDeExibicao << ", horarios: "<< horarios <<") - criado" << endl;
    #endif    
}

Programacao::~Programacao(){
    #ifdef DEBUG
        cout << "- Programacao(cinemas, " << sala << ", filme, " << tipoDeExibicao << ", " << horarios << ") - destruido" << endl;
    #endif
}

Cinema* Programacao::obtemCinema() const { return cinema; }
int Programacao::obtemSala() const { return sala; }
Filme* Programacao::obtemFilme() const { return filme; }
int Programacao::obtemTipoDeExibicao() const { return tipoDeExibicao; }
string Programacao::obtemHorarios() const { return horarios; }


string Programacao::str(bool incluiCinema) const {
    stringstream ss;

    if(incluiCinema) ss << cinema->obtemNome() << " - ";

    ss << "Sala " << sala << ": " << filme->obtemTitulo() << " | " << horarios << " | ";

    switch (tipoDeExibicao){
        case 1:
            ss << "LEG";
            break;
        case 2:
            ss << "DUB";
            break;
        case 3:
            ss << "3D LEG";
            break;
        case 4:
            ss << "3D DUB";
            break;
    
        default:
            ss << "NAC";
            break;
    }

    if(filme->obtemFaixaEtaria() < 1) ss << " | " << "[LIVRE] | " << filme->obtemEstilo();
    else ss << " | [" << filme->obtemFaixaEtaria() <<"] | " << filme->obtemEstilo();

    return ss.str();
}

void Programacao::defineCinema(Cinema *c) { cinema = c; }
void Programacao::defineSala(int s) { sala = s; }
void Programacao::defineFilme(Filme *f) { filme = f; }
void Programacao::defineTipoDeExibicao(int t) { tipoDeExibicao = t; }
void Programacao::defineHorarios(string h) { horarios = h; }