#include<iostream>
    using namespace std;
    class Pessoa {
        private:
            string nome ;
        public:
            Pessoa ( string n="") { nome = n; }
            string obtemNome () { return nome ; }
    };
    
int main () {
    Pessoa * fulano = new Pessoa (" Fulano de Tal ");
    cout << fulano -> obtemNome () << endl ;
    delete fulano ;
    return 0;
}