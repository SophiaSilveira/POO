#ifndef _PILHA_HPP
#define _PILHA_HPP

#include <string>
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
class Stack {
  private:
    vector<T> stack;
    size_t valueMaxSize;
  public:
    Stack(int value = 0);
    ~Stack();
    int size() const;
    int maxSize () const;
    bool isEmpty() const;
    bool isFull () const;
    void clear();
    void push(const T &e);
    T pop();
    T top() const;
    string str() const;
};

template <typename T>
Stack<T>::Stack(int value){
  if(value != 0) valueMaxSize = value;
  else{
    valueMaxSize = stack.max_size();
  }
}

template <typename T>
Stack<T>::~Stack(){}

template <typename T>
int Stack<T>::size() const{ return stack.size(); }

template <typename T>
int Stack<T>::maxSize () const { return valueMaxSize;}

template <typename T>
bool Stack<T>::isEmpty() const{ return stack.empty();}

template <typename T>
bool Stack<T>::isFull() const{ return stack.size() == valueMaxSize;}

template <typename T>
void Stack<T>::clear(){ stack.clear(); }

template <typename T>
void Stack<T>::push(const T &e){
  if(size() >= valueMaxSize)  throw "Erro: Nao foi possivel adicionar este item";
  stack.push_back(e);
}

template <typename T>
T Stack<T>::pop(){ 

  if(isEmpty()) throw "Erro: Nao foi possivel remover nenhum item";

  T value = stack.back();
  stack.pop_back();
    
  return value; 
}

template <typename T>
T Stack<T>::top() const{ 
  
  if(isEmpty()) throw "Erro: A fila esta vazia, nao ha itens!";

  return stack.back();
}

template <typename T>
string Stack<T>::str() const{
  stringstream ss;

  for(int i = stack.size() -1; i >= 0; i--){
    ss << "|" << stack[i] << "|";
  }

  return ss.str();
}

#endif
