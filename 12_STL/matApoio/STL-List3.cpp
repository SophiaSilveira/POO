// ************************************************
//  STL - list
//  Exemplo de lista
// Para o SORT apresenta a opção de sobrecarregar 
// o operador de == e <
// ************************************************
#include <iostream>
using std::cout;
using std::cin;
using std::string;

#include "cpessoa2.h"

#include <list>
using std::list;

bool em_ordem(cpessoa &p1, cpessoa &p2)
{
    if (p1.getnome()<p2.getnome())
        return true;
    else return false; 
}

bool em_ordem2(cpessoa * &p1, cpessoa * &p2)
{
    if (p1->getnome()<p2->getnome())
        return true;
    else return false; 
}
// sobrecarga de operadores para a classe "cpessoa"
bool operator ==(cpessoa &p1, cpessoa &p2) 
{
   return p1.getnome() == p2.getnome();
}
bool operator <(cpessoa &p1, cpessoa &p2) 
{
   return p1.getnome() < p2.getnome();
}

int main()
{
   cpessoa *aux, teste("aaa",13); 
   list<cpessoa> lista;   
   list<cpessoa>::iterator p;
   // cria um lista de ponteiros...
   list<cpessoa *> listaptr;   
   list<cpessoa *>::iterator pptr;
 
   // verifica se a lista está vazia
   if (lista.empty())
      cout << "Lista vazia !\n ";
   else cout << "Lista não vazia !\n";
   
   // aponta para o inicio da lista
   p = lista.begin();

   cout << "Adicionando...\n";
   // adiciona uma pessoa na lista
   aux = new cpessoa("Jose", 12);
   lista.push_back(*aux);
   // adiciona na lista de ponteiros...
   listaptr.push_back(aux); 
   pptr = listaptr.begin();
   (*pptr)->imprime();
   
  
   lista.push_back(cpessoa("Maria", 17));
   lista.push_back(cpessoa("Abel", 22));
   lista.push_front(cpessoa("Laura", 22));
   lista.push_front(cpessoa("Emilio", 22));
  
     
   aux = new cpessoa("Zelia", 52);
   lista.push_front(*aux);
   
   if (lista.empty())
      cout << "Lista vazia !\n ";
   else cout << "Lista não vazia !\n";
   // Impressão da lista
   cout << "\n\nImpressão da lista:\n";

   // remove um elemento da lista
   p = lista.begin();
   p++;
   lista.erase(p); // remove "Emilio"       
   
   p = lista.begin();
   for (int i=0; i<lista.size();i++)
   {
       p->imprime();
       if (p->getnome() == "Zelia")
           cout << "Achou !!\n";
       p++;
   }
   cout << "\n";
   
/* Saida   
    Nome: Zelia
    Idade: 52
    Nome: Laura
    Idade: 22
    Nome: Jose
    Idade: 12
    Nome: Maria
    Idade: 17
    Nome: Abel
    Idade: 22

*/
  
  // Impressão da lista ordenada
 
     //lista.sort(em_ordem);
   lista.sort();   
 
   cout << "\n\nImpressão da lista ordenada:\n";
   p = lista.begin();
   for (int i=0; i<lista.size();i++)
   {
       p->imprime();
       p++;
   }
   cout << "\n";

   // Insere um elemento no meio da lista
   p = lista.begin();
   p++;
   p++;
   lista.insert(p, 1, cpessoa("Flavio", 66)); // insere um objeto pessoa antes 
                                              // do 3o. elemento 
   
    // Impressão da nova lista 
   cout << "\n\nNova lista:\n";
   p = lista.begin();
   for (int i=0; i<lista.size();i++)
   {
       p->imprime();
       p++;
   }
   cout << "\n";
/*
    Nome: Abel
    Idade: 22
    Nome: Jose
    Idade: 12
    Nome: Flavio
    Idade: 66
    Nome: Laura
    Idade: 22
    Nome: Maria
    Idade: 17
    Nome: Zelia
    Idade: 52
*/ 

    //lista.find (lista.begin(), lista.end(), cpessoa("Flavio", 66));
         
   system("PAUSE");	
   return 0;
} 

