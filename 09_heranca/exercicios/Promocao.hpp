#ifndef _PROMOCAO_HPP
#define _PROMOCAO_HPP

#include <string>

using namespace std ;
class Promocao {
    private:
        double percDesconto;
    public:
        Promocao ( double pD = 0.0);
        Promocao ( string nomePromocao );
        ~ Promocao ();
        void definePromocao ( string nomePromocao );
        void definePercDesconto ( double pD );
        double obtemPercDesconto () const ;
};
# endif
