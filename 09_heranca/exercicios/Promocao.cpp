# ifdef DEBUG
# include <iostream >
# endif
# include "Promocao.hpp"
Promocao :: Promocao ( double pD ) {
percDesconto = pD ;
# ifdef DEBUG
cerr << "+ Promocao (" << percDesconto << ") criado ... " << endl ;
# endif
}
Promocao :: Promocao ( string nomePromocao ) {
definePromocao ( nomePromocao );
# ifdef DEBUG
cerr << "+ Promocao (" << percDesconto << ") criado ... " << endl ;
# endif
}
Promocao ::~ Promocao () {
# ifdef DEBUG
cerr << "- Promocao (" << percDesconto << ") destru ído ... " << endl ;
# endif
}
void Promocao :: definePromocao ( string nomePromocao ) {
if ( nomePromocao == " Regular " ) percDesconto = 0.10;
else if ( nomePromocao == " Liquida ção" ) percDesconto = 0.30;
else percDesconto = 0.0;
}
void Promocao :: definePercDesconto ( double pD ) { percDesconto = pD ; }
double Promocao :: obtemPercDesconto () const { return percDesconto ; }