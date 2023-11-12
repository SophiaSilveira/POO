# ifndef _PRODUTOCOMPAGINAS_HPP
# define _PRODUTOCOMPAGINAS_HPP
# include "Produto.hpp"
class ProdutoComPaginas : public Produto {
protected :
int paginas ;
public :
ProdutoComPaginas ();
ProdutoComPaginas ( string n , double pB , Promocao *p , int pg );
~ ProdutoComPaginas ();
int obtemPaginas () const ;
void definePaginas (int pg );
string str () const ;
};
#endif
