#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class ListaLinkSinal{	
  private:
	  // Classe interna
	  class Nodo{
	  public:
	    int element;
	    Nodo* prox;
	    Nodo* p_pos;
	    Nodo* p_neg;

	    Nodo(int umElemento){
			  element = umElemento;
			  prox = NULL;
			  p_pos = NULL;
			  p_neg = NULL;
		  }
	  };

    // Atributos
    Nodo* prim;
    Nodo* ult;

  public:
    ListaLinkSinal(){
	  	prim = NULL;
		  ult = NULL;
	  }
	
    void add(int element) {
      // Cria o novo nodo
      Nodo* novo = new Nodo(element);
      // Se a lista esta vazia, este e o primeiro
      if (prim == NULL) {
        prim = novo;
      } else { // se a lista nao esta vazia, encadeia no final
        ult->prox = novo;
      }
      ult = novo; // atualiza referencia para o ultimo

      //Atualiza pos & neg
      Nodo *a = this->prim;
      while (a->prox != NULL) {
        if(element<0){
          if(a->p_neg == NULL)
            a->p_neg = novo;
        }
        else{
          if(a->p_pos == NULL)
            a->p_pos = novo;
        }
        a = a->prox;
      }   
    }

    string soPositivos() {
      stringstream tmpss;
      Nodo *a = this->prim;

      while (a != NULL) {
        if(a->element > 0)
          tmpss << a->element << endl;
        a = a->p_pos;
      }
      return tmpss.str();
    }	

    string soNegativos() {
      stringstream tmpss;
      Nodo *a = this->prim;

      while (a != NULL) {
        if(a->element < 0)
          tmpss << a->element << endl;
        a = a->p_neg;
      }
      return tmpss.str();
    }
};

int main() {
  ListaLinkSinal *lls = new ListaLinkSinal();
	
  lls->add(10);
  lls->add(9);
  lls->add(2);
  lls->add(-15);
  lls->add(22);
  lls->add(-122);

	cout << "Positivos:" << endl << lls->soPositivos() << endl;
	cout << "Negativos:" << endl << lls->soNegativos() << endl;
	return 0;
}