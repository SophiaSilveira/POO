// Banco.hpp

#ifndef _ALUNO_HPP
#define _ALUNO_HPP
#define MAX_CONTAS 100

#include <string>
#include "Conta.hpp"

using namespace std;

class Banco{
    private:
        string nome;
        int numContas;
        Conta contas[MAX_CONTAS];
    
    public:
        Banco(string nome = " ");
        string obemNome();
        bool adicionaConta( Conta & const conta);
        Conta *obtemConta(int numero);
        bool transferir( Conta &deCC, Conta &paraCC, double valor);
        double obemSaldoTotal();
        int obtemNumContas();
};

#endif