#ifndef _PILHA_HPP
#define _PILHA_HPP

#include <string>
#include <vector>
#include <iterator>

using namespace std;

template <typename T>
class Pilha {
  private:
    vector<> stack;
  public:
    Pilha();
    ~Pilha();
    int size() const;
    bool isEmpty() const;
    void clear();
    void push(const T &e);
    T pop();
    T top() const;
    string str() const;
};

template <typename T>
Pilha<T>::Pilha(){}

template <typename T>
Pilha<T>::~Pilha(){}

template <typename T>
int Pilha<T>::size() const{ return stack.size(); }

template <typename T>
bool Pilha<T>::isEmpty() const{ return stack.empty();}

template <typename T>
void Pilha<T>::clear(){ stack.clear(); }

template <typename T>
void Pilha<T>::push(const T &e){}

template <typename T>
T Pilha<T>::pop(){ if(!stack.back()) throw }

template <typename T>
T Pilha<T>::top() const{}

template <typename T>
string Pilha<T>::str() const{}

#endif
