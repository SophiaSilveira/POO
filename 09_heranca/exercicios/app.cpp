# include <iostream >
# include "Produto.hpp"
# include "ProdutoComPaginas.hpp"
# include "ProdutoComPaginasEAno.hpp"

using namespace std ;

int main () {
Promocao semPromocao (0.0);
Promocao regular (" Regular "); // 0.10
Promocao liquidacao (" Liquida ção"); // 0.30
Produto lapis1 ("Lá pis 1" ,1.00 ,& semPromocao ) ,
lapis2 ("Lápis 2" ,1.00 ,& regular ),
lapis3 ("Lápis 3" ,1.00 ,& liquidacao );
cout << lapis1 . str () << endl ;
cout << lapis2 . str () << endl ;
cout << lapis3 . str () << endl ;
ProdutoComPaginas caderno1 (" Caderno1 " ,10.00 ,& semPromocao ,100) ,
caderno2 (" Caderno2 " ,20.00 ,& regular ,200) ,
caderno3 (" Caderno3 " ,30.00 ,& liquidacao ,300);
cout << caderno1 . str () << endl ;
cout << caderno2 . str () << endl ;
cout << caderno3 . str () << endl ;
ProdutoComPaginasEAno agenda1 (" Agenda 2023 " ,50.00 ,& semPromocao ,400 ,2023) ,
agenda2 (" Agenda 2024 " ,50.00 ,& regular ,400 ,2024) ,
agenda3 (" Agenda 2025 " ,50.00 ,& liquidacao ,400 ,2025);
cout << agenda1 . str () << endl ;
cout << agenda2 . str () << endl ;
cout << agenda3 . str () << endl ;
return 0;
}