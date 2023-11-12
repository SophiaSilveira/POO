#include <iostream>

using namespace std;

class StringDoubleLinkedList {
private:
  struct Node {
    string data;
    Node *prev, *next;
    Node(string d) {  data = d;  prev = next = nullptr;  }
  };
  Node *head, *tail;
  Node *find(string s) const {
    Node *aux = head;
    while (aux != nullptr) {
      if ( aux->data == s ) return aux;
      aux = aux->next;
    }
    return nullptr;
  }

public:
  StringDoubleLinkedList() {  head = tail = nullptr;  }
  ~StringDoubleLinkedList() {  
    while (head != nullptr) {  Node *aux = head;  head = head->next;  delete aux; }
  }
  void push_back(string s) {
    Node *aux = new Node(s);
    if ( head == nullptr ) {  head = tail = aux;  }
    else {  aux->prev = tail;  tail->next = aux;  tail = aux;  }
  }
  void remove(string s){

    Node *aux = find(s);

    if(aux == nullptr) return;

    if(aux == head){
        head = head->next;
        if(head == nullptr) tail = nullptr;
        else head->prev = nullptr;
    }
    else{
        (aux->prev)->next = aux->next;

        if (aux->next == nullptr) tail = aux->prev;
        else (aux->next)->prev = aux->prev;
    }

    delete aux;

    /* implementação sem find s
    if(head == nullptr) return;

    Node *aux = head;

   if(aux->data == s){
        head = head->next;
        head->prev = nullptr;
        delete aux;
    } 
    else{
        while(aux != nullptr){
            if(aux->data == s) break;
            aux = aux->next;
        }
        
        (aux->prev)->next = aux->next;
        if(aux->next == nullptr) tail = aux->prev;
        else (aux->next)->prev = aux->prev;

        delete aux;
    }*/
  }
};