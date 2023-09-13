//Conta.cpp

#include "Conta.hpp"

Conta::Conta(int n, double s){
    numero = n;
    saldo = s;
};

int Conta::obtemNumero(){
    return numero;
}

double Conta::obtemSaldo(){
    return saldo;
}

void Conta::depositar(double valor){
    saldo += valor;
}

double Conta::retirar(double valor){
    saldo -= valor;
}

double Conta::retirar(){
    saldo = 0;
}