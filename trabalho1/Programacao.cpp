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

string Programacao::str(bool incluiCinema) const { //retorno das informações de forma padronizada
    stringstream ss;

    //verifica se incluiCinema é true, se sim inclui nome cinema e  - 
    if(incluiCinema) ss << cinema->obtemNome() << " - ";

    ss << "Sala " << sala << ": " << filme->obtemTitulo() << " | " << horarios << " | ";

    //verifica o tipo de exibiçõo caso 1, 2, 3, 4, 5(default)
    //e os direciona respectivamete para LEG, DUB, 3D LEG, 3D DUB, NAC
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

    //verifica se faixa etárioa menor que 1, adiciona | e live, else | e a faixa informada pelo onj. filme
    if(filme->obtemFaixaEtaria() < 1) ss << " | " << "[LIVRE";
    else ss << " | [" << filme->obtemFaixaEtaria();
    
    ss <<"] | " << filme->obtemEstilo();

    return ss.str();
}

void Programacao::defineCinema(Cinema *c) { cinema = c; }

void Programacao::defineSala(int s) { sala = s; }

void Programacao::defineFilme(Filme *f) { filme = f; }

void Programacao::defineTipoDeExibicao(int t) { tipoDeExibicao = t; }

void Programacao::defineHorarios(string h) { horarios = h; }