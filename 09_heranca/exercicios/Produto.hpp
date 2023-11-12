#ifndef _PRODUTO_HPP
#define _PRODUTO_HPP
#include "Promocao.hpp"

class Produto {
    protected :
        string nome ;
        double precoBase ;
        Promocao * promocao ;
    public :
        Produto ();
        Produto ( string n , double pB , Promocao *p );
        ~ Produto ();
        string obtemNome () const ;
        double obtemPrecoBase () const ;
        double obtemPrecoFinal () const ;
        Promocao * obtemPromocao () const ;
        void defineNome ( string n );
        void definePrecoBase ( double pB );
        void definePromocao ( Promocao *p );    
        string str () const ;
};
# endif
