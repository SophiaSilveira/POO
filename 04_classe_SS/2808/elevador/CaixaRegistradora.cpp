//CaixaRegistradora.cpp

#include <iostream>
#include <sstream>
#include <iomanip>
#include "CaixaRegistradora.hpp"

CaixaRegistradora::CaixaRegistradora( int i, double d){
    precoTotal = d;
    numItens = i;

    #ifdef DEBUG
    cout << "+Caixa(" << precoTotal << " e " << numItens << ") criado..." << endl;
    #endif
}

CaixaRegistradora::~CaixaRegistradora(){
    #ifdef DEBUG
    cout << "-Caixa(" << precoTotal << " e " << numItens << ") destruido..." << endl;
    #endif
}

void CaixaRegistradora::adicionaItem(double preco){
    precoTotal += preco;
    numItens++;

    #ifdef DEBUG
    cout << "+Caixa preco (" << preco << ") somado... n itens(" << numItens << ") incrementado..." << endl;
    #endif
}

double CaixaRegistradora::obtemTotal(){
    return precoTotal;

    #ifdef DEBUG
    cout << "+Caixa obtemTotal (" << precoTotal << ") mostrado..." << endl;
    #endif
}

int CaixaRegistradora::obtemNumItens(){
    return numItens;

    #ifdef DEBUG
    cout << "+Caixa numItens (" << numItens << ") mostrado..." << endl;
    #endif
}

void CaixaRegistradora::limpa(){
    numItens = DEFAULT;
    precoTotal = DEFAULT;

    #ifdef DEBUG
    cout << "-Caixa(" << precoTotal << " e " << numItens << ") zerado..." << endl;
    #endif

}

string CaixaRegistradora::str(){
    stringstream ss;
    ss << '> CaixaRegistradora << numItens << "."';
    ss << "precoTotal= " << fixed << setprecision(2) << precoTotal << ')';
    return ss.str();
}
