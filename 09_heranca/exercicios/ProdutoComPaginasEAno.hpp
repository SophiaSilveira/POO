# ifndef _PRODUTOCOMPAGINASEANO_HPP
# define _PRODUTOCOMPAGINASEANO_HPP
# include "ProdutoComPaginas.hpp"
class ProdutoComPaginasEAno : public ProdutoComPaginas {
protected :
int ano ;
public :
ProdutoComPaginasEAno ();
ProdutoComPaginasEAno ( string n , double pB , Promocao *p , int pg , int a );
~ ProdutoComPaginasEAno ();
int obtemAno () const ;
void defineAno ( int pg );
string str () const ;
};
# endif