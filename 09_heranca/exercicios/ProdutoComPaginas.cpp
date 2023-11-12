# ifdef DEBUG
# include <iostream >
# endif
# include <sstream>
# include "ProdutoComPaginas.hpp"
ProdutoComPaginas :: ProdutoComPaginas () : Produto ("" ,0.0 , nullptr ) {
paginas = 0;
# ifdef DEBUG
cerr << "+ ProdutoComPaginas (" << str () << ") criado ... " << endl ;
# endif
}
ProdutoComPaginas :: ProdutoComPaginas ( string n , double pB , Promocao *p , int pg ) : Produto (n ,pB ,p) {
paginas = pg ;
# ifdef DEBUG
cerr << "+ ProdutoComPaginas (" << str () << ") criado ... " << endl ;
# endif
}
ProdutoComPaginas ::~ ProdutoComPaginas () {
# ifdef DEBUG
cerr << "- ProdutoComPaginas (" << str () << ") destru ído ... " << endl ;
# endif
}
int ProdutoComPaginas :: obtemPaginas () const { return paginas ; }
void ProdutoComPaginas :: definePaginas ( int pg ) { paginas = pg ; }
string ProdutoComPaginas :: str () const {
stringstream ss ;
ss << Produto :: str () << "," << paginas ;
return ss . str ();
}