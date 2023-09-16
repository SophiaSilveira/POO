#include <iostream>
#include <sstream>

using namespace std;    

class Pessoa {
    private:
        string nome;
        int idade;
    public:
        Pessoa(string n="", int i=0);
        ~Pessoa();
        string obtemNome() const;
        int obtemIdade() const;
        void defineNome(string n);
        void defineIdade(int i);
        void fazAniversario();
        string str() const;

        Pessoa operator+(const int i) const;
        void operator+=(const int i);
        Pessoa operator++(); // pre-incremento
        Pessoa operator++(int); // pos-incremento

        bool operator>(const Pessoa &p) const;
        bool operator<(const Pessoa &p) const;
        bool operator==(const Pessoa &p) const;
        bool operator!=(const Pessoa &p) const;
        bool operator>=(const Pessoa &p) const;
        bool operator<=(const Pessoa &p) const;

        bool operator>(const int i) const;
        bool operator<(const int i) const;
        bool operator==(const int i) const;
        bool operator!=(const int i) const;
        bool operator>=(const int i) const;
        bool operator<=(const int i) const;

        friend ostream &operator<<(ostream &out, const Pessoa &p);
        friend istream &operator>>(istream &in, Pessoa &p);
};

Pessoa::Pessoa(string n, int i){
    nome = n;
    idade = i;
}

Pessoa::~Pessoa(){}

string Pessoa::obtemNome() const{
    return nome;
}

int Pessoa::obtemIdade() const{
    return idade;
}

void Pessoa::defineNome(string n){
    nome = n;
}

void Pessoa::defineIdade(int i){
    idade = i;
}

void Pessoa::fazAniversario(){
    idade++;
}

string Pessoa::str() const{
    stringstream ss;

    ss << nome << " (" << idade << ")";

    return ss.str();
}

Pessoa Pessoa::operator+(const int i) const{
    return Pessoa(obtemNome(), obtemIdade() + i);
}

void Pessoa::operator+=(const int i){
    idade += i;
}

Pessoa Pessoa::operator++(){
    fazAniversario();

    return Pessoa(obtemNome(), obtemIdade());
}

Pessoa Pessoa::operator++(int){
    Pessoa *copy = new Pessoa(obtemNome(), obtemIdade());

    fazAniversario();

    return *copy;
}

bool Pessoa::operator>(const Pessoa &p) const{
    if(obtemIdade() > p.obtemIdade())  return true;

    return false;
}

bool Pessoa::operator<(const Pessoa &p) const{
    if(obtemIdade() < p.obtemIdade())  return true;

    return false;
}

bool Pessoa::operator==(const Pessoa &p) const{
    if(obtemIdade() == p.obtemIdade())  return true;

    return false;
}

bool Pessoa::operator!=(const Pessoa &p) const{
    if(obtemIdade() != p.obtemIdade())  return true;

    return false;
}

bool Pessoa::operator>=(const Pessoa &p) const{
    if(obtemIdade() >= p.obtemIdade())  return true;

    return false;
}

bool Pessoa::operator<=(const Pessoa &p) const{
    if(obtemIdade() <= p.obtemIdade())  return true;

    return false;
}


bool Pessoa::operator>(const int i) const{
    if(obtemIdade() > i)  return true;

    return false;
}

bool Pessoa::operator<(const int i) const{
    if(obtemIdade() < i)  return true;

    return false;
}

bool Pessoa::operator==(const int i) const{
    if(obtemIdade() == i)  return true;

    return false;
}

bool Pessoa::operator!=(const int i) const{
    if(obtemIdade() != i)  return true;

    return false;
}

bool Pessoa::operator>=(const int i) const{
    if(obtemIdade() >= i)  return true;

    return false;
}

bool Pessoa::operator<=(const int i) const{
    if(obtemIdade() <= i)  return true;

    return false;
}


ostream &operator<<(ostream &out, const Pessoa &p){
    out << p.str();
    return out;
}
istream &operator>>(istream &in, Pessoa &p){
    string linha;

    getline(in, linha);

    p.defineNome(linha);

    getline(in, linha);
    p.defineIdade(stoi(linha));

    return in;
}

int main() {
    
    Pessoa batman;
    cout << "Nome = " << batman.obtemNome() << endl;
    cout << "Idade = " << batman.obtemIdade() << endl;
    batman.defineNome("Bruce Wayne");
    batman.defineIdade(34);
    cout << batman << endl;
    cout << endl;

   
    Pessoa homemAranha("Peter Parker",35);
    cout << "Nome = " << homemAranha.obtemNome() << endl;
    cout << "Idade = " << homemAranha.obtemIdade() << endl;
    homemAranha.fazAniversario();
    cout << homemAranha << endl << endl;


    cout << (batman >= homemAranha?"ERRO":"OK") << " ";
    cout << (batman > homemAranha?"ERRO":"OK")<< " ";
    cout << (batman <= homemAranha?"OK":"ERRO") << " ";
    cout << (batman < homemAranha?"OK":"ERRO") << " ";
    cout << (batman != homemAranha?"OK":"ERRO") << " ";
    cout << (batman == homemAranha?"ERRO":"OK") << endl << endl;
 
    cout << batman << endl;
    batman = batman + 2;
    cout << batman << endl;
    cout << endl;

    cout << (batman >= homemAranha?"OK":"ERRO") << " ";
    cout << (batman > homemAranha?"ERRO":"OK") << " ";
    cout << (batman <= homemAranha?"OK":"ERRO") << " ";
    cout << (batman < homemAranha?"ERRO":"OK") << " ";
    cout << (batman != homemAranha?"ERRO":"OK") << " ";
    cout << (batman == homemAranha?"OK":"ERRO") << endl << endl;

    cout << batman << endl;
    ++batman;
    cout << batman << endl;
    cout << endl;

    cout << (batman >= homemAranha?"OK":"ERRO") << " ";
    cout << (batman > homemAranha?"OK":"ERRO") << " ";
    cout << (batman <= homemAranha?"ERRO":"OK") << " ";
    cout << (batman < homemAranha?"ERRO":"OK") << " ";
    cout << (batman != homemAranha?"OK":"ERRO") << " ";
    cout << (batman == homemAranha?"ERRO":"OK") << endl << endl;

    cout << batman << endl;
    batman += 2;
    cout << batman << endl;
    cout << endl;

    cout << (batman >= 40?"ERRO":"OK") << " ";
    cout << (batman > 40?"ERRO":"OK") << " ";
    cout << (batman <= 40?"OK":"ERRO") << " ";
    cout << (batman < 40?"OK":"ERRO") << " ";
    cout << (batman != 40?"OK":"ERRO") << " ";
    cout << (batman == 40?"ERRO":"OK") << endl << endl;

    batman.fazAniversario();
    cout << (batman >= 40?"OK":"ERRO") << " ";
    cout << (batman > 40?"ERRO":"OK") << " ";
    cout << (batman <= 40?"OK":"ERRO") << " ";
    cout << (batman < 40?"ERRO":"OK") << " ";
    cout << (batman != 40?"ERRO":"OK") << " ";
    cout << (batman == 40?"OK":"ERRO") << endl << endl;

    batman.fazAniversario();
    cout << (batman >= 40?"OK":"ERRO") << " ";
    cout << (batman > 40?"OK":"ERRO") << " ";
    cout << (batman <= 40?"ERRO":"OK") << " ";
    cout << (batman < 40?"ERRO":"OK") << " ";
    cout << (batman != 40?"OK":"ERRO") << " ";
    cout << (batman == 40?"ERRO":"OK") << endl << endl;

    Pessoa p1, p2;
    cin >> p1;
    p2 = p1++;
    cout << "p1=" << p1 << endl;
    cout << "p2=" << p2 << endl;
    p2 = ++p1;
    cout << "p1=" << p1 << endl;
    cout << "p2=" << p1 << endl;

    return 0;
}
