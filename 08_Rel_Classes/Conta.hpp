// Conta.hpp

#ifndef _CONTA_HPP
#define _CONTA_HPP

using namespace std;

class Conta{
    private:
        int numero;
        double saldo;
    
    public:
        Conta(int n, double s);
        int obtemNumero();
        double obtemSaldo();
        void depositar(double valor);
        double retirar(double valor);
        double retirar();
};

#endif