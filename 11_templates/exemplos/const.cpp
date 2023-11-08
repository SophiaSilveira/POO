// Arquivo: const.cpp
// Autor:   Roland Teodorowitsch
// Data:    29 maio 2019)
// Assunto: variacoes de uso de const envolvendo ponteiros

#include <iostream>

using namespace std;

int main() {

  // --- PONTEIRO VARIAVEL + CONTEUDO VARIAVEL ---
  int *x; // x eh um ponteiro para int
  int a = 15;
  x = &a;
  cout << "a = " << a << endl;
  cout << "*x = " << *x << endl;
  a++;
  (*x)++;
  cout << "a = " << a << endl;
  cout << "*x = " << *x << endl;
  int b = 20;
  x = &b;
  cout << "b = " << b << endl;
  cout << "*x = " << *x << endl;

  // --- PONTEIRO VARIAVEL + CONTEUDO CONSTANTE ---
  int const *y;      // y eh um ponteiro para um int constante
  const int c = 25;  //   eh a mesma coisa que: const int *y;
  y = &c;
  cout << "c = " << c << endl;
  cout << "*y = " << *y << endl;
  // NAO PERMITIDO: c++;
  // NAO PERMITIDO: (*y)++;
  int const d = 30;
  y = &d;
  cout << "d = " << d << endl;
  cout << "*y = " << *y << endl;

  // --- PONTEIRO CONSTANTE + CONTEUDO VARIAVEL ---
  int e = 35;
  int * const z = &e; // z eh um ponteiro constante para um int
  cout << "e = " << e << endl;
  cout << "*z = " << *z << endl;
  e++;
  (*z)++;
  cout << "e = " << e << endl;
  cout << "*z = " << *z << endl;
  int f = 40;
  // NAO PERMITIDO: z = &f;

  // --- PONTEIRO CONSTANTE + CONTEUDO CONSTANTE ---
  const int g = 45;
  int const * const w = &g;     // w eh um ponteiro constante para um int constante
  cout << "g = " << g << endl;  //   eh a mesma coisa que: const int * const w = &g;
  cout << "*w = " << *w << endl;
  // NAO PERMITIDO: g++;
  // NAO PERMITIDO: (*w)++;
  const int h = 50;
  // NAO PERMITIDO: w = &h;

  return 0;  
}

