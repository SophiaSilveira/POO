#include <iostream>
#include <iomanip>
#include <sstream>
#include <list>
#include <vector>

using namespace std;

class Turma{
private:
    string codigo;
    int creditos;
    string nome, turma;
    vector<int> diaSemana;
    vector<string> horario;
public:
    Turma(string c = "", int cr = 0, string n = "", string t = "") : codigo(c), creditos(cr), nome(n), turma(t) {}
    string obtemCodigo() const { return codigo; }
    int obtemCreditos() const{ return creditos; }
    string obtemNome() const{ return nome; }
    string obtemTurma() const{ return turma; }
    void adcionaEncontro(int ds, string h){ diaSemana.push_back(ds); horario.push_back(h); }
    string str(){
        stringstream ss; 
        ss << codigo << "-" << setw(2) << setfill('0') << creditos << " ";
        ss << nome << " - Turma " << turma << ":";
        for(int i = 0; i < diaSemana.size(); i++) ss << " " << diaSemana[i] << horario[i];
        return ss.str();
    }
    bool operator<(Turma &t) { return codigo < t.codigo;}
    bool operator==(Turma &t) { return codigo == t.codigo;}
};

int main(){
    Turma poo1("98718", 4, "Programação Orientada A Objetos - Eco", "10");
    poo1.adcionaEncontro(2, "AB"); poo1.adcionaEncontro(4, "AB");

    list<Turma> minhasTurmas;
    minhasTurmas.push_back(poo1);

    for(list<Turma>::const_iterator it = minhasTurmas.begin(); it != minhasTurmas.end(); ++it)
        cout << (*it).str() << endl;

        

    return 0;
}