#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>	

using namespace std;

class Filme {
private:
  int numero;
  string titulo;
  int faixaEtaria;
  string estilo;
public:
  Filme(int n=-1, string t="", int f=-1, string e="");
  ~Filme();
  int obtemNumero() const;
  string obtemTitulo() const;
  int obtemFaixaEtaria() const;
  string obtemEstilo() const;
  string str() const;
  void defineNumero(int n);
  void defineTitulo(string t);
  void defineFaixaEtaria(int f);
  void defineEstilo(string e);
  bool operator<(const Filme &f) const;
};

Filme::Filme(int n, string t, int f, string e) {
    numero = n;
    titulo = t;
    faixaEtaria = f;
    estilo = e;

    #ifdef DEBUG
        cout << "+ Filme(" << titulo << " ["<< numero <<"] - " << faixaEtaria <<" anos - " << estilo << ") criado" << endl;
    #endif
}

Filme::~Filme() {
    #ifdef DEBUG
        cout << "- Filme(" << titulo << " ["<< numero <<"]" << " - " << faixaEtaria <<" anos - " << estilo << ") destruido" << endl;
    #endif
}

int Filme::obtemNumero() const { return numero; }

string Filme::obtemTitulo() const { return titulo; }

int Filme::obtemFaixaEtaria() const { return faixaEtaria; }

string Filme::obtemEstilo() const { return estilo; }

string Filme::str() const {
    stringstream ss;
    ss << titulo << " [" << numero << "] - ";
    
    if(faixaEtaria < 1) ss  << "LIVRE";
    else ss << faixaEtaria << " anos";

    ss << " - " << estilo;
    return ss.str();
}

void Filme::defineNumero(int n) { numero = n; }

void Filme::defineTitulo(string t) { titulo = t; }

void Filme::defineFaixaEtaria(int f) { faixaEtaria = f; }

void Filme::defineEstilo(string e) { estilo = e; }

bool Filme::operator<(const Filme &f) const {
    return titulo < f.obtemTitulo();
}

vector<string> splitCSV(string linha, char separador=';') {
    vector<string> res;
    string campo = "";

    for (int i=0; i<linha.size(); ++i) {
        char c = linha.at(i);
        if (c == separador) {
            res.push_back(campo);
        campo = "";
    }
    else
        campo.append(1,c);
    }
    res.push_back(campo);
    return res;
}

int main(){
    vector<Filme*> filmes;

    string linha;
    while(getline(cin, linha)){
        vector<string> campos = splitCSV(linha, ';');

        int numero = stoi(campos[0]);
        int faixaEtaria =  stoi(campos[2]);

        filmes.push_back( new Filme(numero, campos[1], faixaEtaria, campos[3]));
    } 

    cout << endl << "verficando: " << filmes.size();
    
    vector <string> estilo;
    vector <int> contagem;
    

    for(int i = 0; i < filmes.size(); i++ ){
        string filme = filmes[i]->obtemEstilo();
        int existe = 0;
        int qtd = 0;
        for(int j = 0; j < estilo.size(); j++){
            if(estilo[j] == filme){
                existe = 1;
                break;
            } 
        }

        if(existe != 1) {
            estilo.push_back(filmes[i]->obtemEstilo()); 
            for(int l = 0; l < filmes.size(); l++ ){
                if(filmes[l]->obtemEstilo() == filme) qtd++;
            }
            contagem.push_back(qtd);
        }
    }

    for(int l = 0; l < estilo.size(); l++ )
    
    filmes.clear();

    return 0;
}