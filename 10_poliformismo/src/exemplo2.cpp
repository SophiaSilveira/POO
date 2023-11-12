#include <iostream>
class Base { // CLASSE VIRTUAL PURA (ABSTRATA)
public:
  Base() {}                  // Construtor
  virtual void funcao() = 0; // Metodo virtual puro
};
class Derivada : public Base { // CLASSE DERIVADA
public:
  Derivada() : Base() {}                                  // Construtor
  void funcao() { std::cout << "funcao()" << std::endl; } // Metodo implementado na derivada
};
int main() {
  // NAO eh possivel criar um objeto de Base [Base *objetoB = new Base();], pois ela eh virtual pura,
  // mas ainda eh possivel ter um ponteiro de Base para apontar para objetos derivados (polimorfismo)
  Base *objetoD = new Derivada();
  objetoD -> funcao();   // Chama o metodo da derivada
  delete objetoD;
  return 0;
}

