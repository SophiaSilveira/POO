// main.cpp (Roland Teodorowitsch; 12 abr. 2022)

#include <iostream>
#include "Ponto.hpp"

int main() {
  Ponto a(4,0), b(0,3);

  cout << "a.str()=" << a.str() << endl;
  cout << "b.str()=" << b.str() << endl;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;

  cout << "a.distancia(b)=" << a.distancia(b) << endl;
  cout << "a.pontoMedio(b)=" << a.pontoMedio(b) << endl;
  a.defineX(a.obtemX()+1);
  a.defineY(a.obtemY()+1);
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << "a.obtemX()=" << a.obtemX() << " a.obtemY()=" << a.obtemY() << endl;
  cout << "a.distancia(b)=" << a.distancia(b) << endl;
  cout << "a.pontoMedio(b)=" << a.pontoMedio(b) << endl;
  cout << endl;

  Ponto c(5,1), d(4,0), e;

  e = c+d;
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  cout << "e=c+d=" << e << endl;
  cout << endl;

  e = c-d;
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  cout << "e=c-d=" << e << endl;
  cout << endl;

  e = -c;
  cout << "c=" << c << endl;
  cout << "e=-c=" << e << endl;
  cout << endl;

  cout << "a=" << a << endl;
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  if ( a == c )
     cout << "a == c" << endl;
  else
     cout << "a != c" << endl;
  if ( a == d )
     cout << "a == d" << endl;
  else
     cout << "a != d" << endl;
  if ( a != c )
     cout << "a != c" << endl;
  else
     cout << "a == c" << endl;
  if ( a != d )
     cout << "a != d" << endl;
  else
     cout << "a == d" << endl;
  cout << endl;

  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  a=b;
  cout << "a=b;" << endl;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << endl;

  cout << "e=" << e << endl;
  cout << "e:" << endl;
  cin >> e;
  cout << "e=" << e << endl;

  return 0;
}

