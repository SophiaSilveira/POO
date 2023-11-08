// exemplo01.cpp

#include <iostream>
#include <iterator> // ostream_iterator e istream_iterator

using namespace std;

int main() {
  cout << "Informe dois inteiros: ";
  // cria istream_iterator para ler valores de int a partir de cin
  istream_iterator<int> inputInt(cin);
  int number1 = *inputInt; // le int a partir da entrada padrao
  ++inputInt; // move iterador para o proximo valor de entrada
  int number2 = *inputInt; // le int a partir da entrada padrao
  // cria ostream_iterator para gravar valores int em cout
  ostream_iterator<int> outputInt(cout);
  cout << "A soma eh: ";
  *outputInt = number1 + number2; // gera saida do resultado para cout
  cout << endl;
  return 0;
}

