#include <iostream>
#include "Stack.hpp"

using namespace std;

template <typename T>
void print(Stack<T> &stack) {
    cout << "  size=" << stack.size() << "/" << stack.maxSize() << "  top=" << stack.top();
    cout << "  isEmpty=" << stack.isEmpty() << "  isFull=" << stack.isFull() << "  " << stack.str() << endl;
}

int main() {
  int e;
  bool res;

  try{
    cout << "Stack(4): " << endl;  Stack<int> stack(4);  /*print(stack);*/
    e = 1;  cout << "push(" << e << "): "; stack.push(e);  print(stack);
    e = 2;  cout << "push(" << e << "): "; stack.push(e);  print(stack);
    e = 3;  cout << "push(" << e << "): "; stack.push(e);  print(stack);
    e = stack.top(); cout << "pop(" << e << "):  "; print(stack);stack.pop();
    e = 4;  cout << "push(" << e << "): "; stack.push(e); print(stack);
    /*e = 5;  cout << "push(" << e << "): "; stack.push(e); print(stack);*/
    e = 6;  cout << "push(" << e << "): "; stack.push(e); print(stack);
    e = stack.top(); cout << "pop(" << e << "):  "; print(stack);stack.pop();
    e = stack.top(); cout << "pop(" << e << "):  "; print(stack);stack.pop();
    e = stack.top(); cout << "pop(" << e << "):  "; print(stack);stack.pop();
    e = stack.top(); cout << "pop(" << e << "):  "; print(stack);stack.pop();
   /* e = stack.pop(); cout << "pop(X):  ";  print(stack);*/
    e = 7;  cout << "push(" << e << "): "; stack.push(e); print(stack);
    cout << "clear(): OK  ";  stack.clear();  
  }
  catch(char const *e){
    cerr << e << endl;
  }
  
  return 0;
}

