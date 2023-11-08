// exemplo1.cpp 

#include <iostream> 

using namespace std;

// Definicao da template de funcao printArray
template <typename T>
void printArray(const T *array, int count) {
  for (int i=0; i<count; i++)
      cout << array[i] << " ";
  cout << endl;
}
// fim do template de funcao printArray

/* 
  O template acima eh equivalente a ter 3
  versoes de funcoes (uma para cada tipo):

  void printArray(const int *, int);
  void printArray(const double *, int);
  void printArray(const char *, int);
*/

int main() {
  const int TAM_A = 5; // tamanho do array a 
  const int TAM_B = 7; // tamanho do array b 
  const int TAM_C = 6; // tamanho do array c 
  int    a[TAM_A] = {1,2,3,4,5};
  double b[TAM_B] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
  char   c[TAM_C] = {'H','E','L','L','O','!'};

  cout << "O vetor a contem:" << endl;
  // chama a especializacao da template de funcao do tipo inteiro  
  printArray(a,TAM_A);

  cout << "O vetor b contem:" << endl;
  // chama a especializacao da template de funcao do tipo double
  printArray(b,TAM_B);

  cout << "O vetor c contem:" << endl;
  // chama a especializacao da template de funcao do tipo caractere
  printArray(c,TAM_C);

  return 0;
}
