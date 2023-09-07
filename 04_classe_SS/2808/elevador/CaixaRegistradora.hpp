//CaixaRegistradora.hpp

#ifndef _CAIXAREGISTRADORA_HPP
#define _CAIXAREGISTRADORA_HPP

using namespace std;

class CaixaRegistradora {
    private:
        double precoTotal;
        int numItens;

    public:
        static const int DEFAULT = 0;
        CaixaRegistradora( int i = DEFAULT, double d = DEFAULT);
        ~CaixaRegistradora();
        void adicionaItem( double preco);
        double obtemTotal();
        int obtemNumItens();
        void limpa();
        string str();
};

#endif