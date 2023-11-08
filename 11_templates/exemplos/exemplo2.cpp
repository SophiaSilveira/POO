// exemplo2.cpp

#include <iostream>

using namespace std;

template <typename T>
class Stack {
  private:
    int size; // numero de elementos na Stack
    int top; // localizacao do elemento superior (-1 significa vazio)
    T *stackPtr; // ponteiro para a representacao interna da Stack
  public:
    Stack(int = 10); // construtor padrao (tamanho de Stack 10)
    bool push(const T&); // insere (push) um elemento na Stack
    bool pop(T&); // remove (pop) um elemento da Stack

    ~Stack() {    // destrutor
      delete [] stackPtr; // desaloca o espaco interno para Stack
    }

    bool isEmpty() const {    // determina se a Stack esta vazia
      return top == -1;
    }

    bool isFull() const {    // determina se Stack esta cheia
      return top == size - 1;
    }
};

// template construtora
template <typename T>
Stack<T>::Stack(int s):size((s>0)?s:10),       // valida o tamanho
                       top(-1),                // Stack inicialmente vazia
                       stackPtr(new T[size]) { // aloca memoria para elementos
  // corpo vazio
}

// insere elemento na Stack;
template <typename T>
bool Stack<T>::push(const T &pushValue) {
  if ( !isFull() ) {
     stackPtr[ ++top ] = pushValue; // insere item em Stack
     return true; // insercao bem-sucedido
  }
  return false; // insercao mal-sucedido
}

// remove elemento da Stack;
template <typename T>
bool Stack<T>::pop(T &popValue) {
  if ( !isEmpty() ) {
     popValue = stackPtr[top--]; // remove item da Stack
     return true; // remocao bem-sucedida
  }
  return false; // remocao mal-sucedida
}

int main() {
  Stack<double> doubleStack(5); // tamanho 5
  double doubleValue = 1.1;
  // insere 5 doubles em doubleStack
  while ( doubleStack.push(doubleValue) ) {
    cout << doubleValue << ' ';
    doubleValue += 1.1;
  }
  cout << endl;
  while ( doubleStack.pop(doubleValue) )
    cout << doubleValue << ' ';
  cout << endl;

  Stack<int> intStack; // tamanho padrao de 10
  int intValue = 1;
  // insere 10 inteiros em intStack
  while ( intStack.push(intValue) ) {
    cout << intValue << ' ';
    intValue++;
  }
  cout << endl;
  // remove elementos de intStack
  while ( intStack.pop(intValue) )
    cout << intValue << ' ';
  cout << endl;
  return 0;
}

