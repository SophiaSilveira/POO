/*
Nome do arquivo: Exercicio007
Nome do autor: Sophia Mendes da Silveira
Finalidade do programa: Classe Pessoa
Data de criacao: 25/08/2023
*/

#include <iostream>
using namespace std;

// implementacao da classe Pessoa
class Pessoa {
    private:
        string nome;
        int ano;

    public:
    Pessoa(){
        nome = "";
        ano = 0;
    }

    Pessoa(string nomeP, int anoNasc){
        nome = nomeP;
        ano = anoNasc;
    }

    void defineNome(string nomeP){
        nome = nomeP;
    }

    string obtemNome(){
        return nome;
    }

    void defineAnoNascimento(int anoNasc){
        ano = anoNasc;
    }

    int obtemAnoNascimento(){
        return ano;
    }

    int obtemIdade(int anoAtual){
        anoAtual -= ano;

        if(anoAtual < 0) return -1;
        return anoAtual;
    }

    int obtemIdadeEmMeses(int anoAtual){
        int idade = obtemIdade(anoAtual);

        if(idade < 0) return -1;
        idade *= 12;
        return idade;
    }

};

int main() {
  Pessoa *p = new Pessoa();
  cout << "[" << p->obtemNome() << "](" << p->obtemAnoNascimento() << ")" << endl;
  p->defineNome("Friedrich Wilhelm Nietzsche");
  p->defineAnoNascimento(1844);
  cout << "[" << p->obtemNome() << "](" <<
                 p->obtemAnoNascimento() << "/" <<
                 p->obtemIdade(1900) << " anos/" <<
                 p->obtemIdadeEmMeses(1900) << " meses)" << endl;
  delete p;
  Pessoa *rn = new Pessoa("Fulano",2020);
  cout << "Nome = " << rn-> obtemNome() << endl;
  cout << "Ano de Nascimento = " << rn->obtemAnoNascimento() << endl;
  for (int i=2018; i<2025; ++i)
      cout << i << " " << rn->obtemIdade(i) << " " << rn->obtemIdadeEmMeses(i) << endl;
  delete rn;
  return 0;
}
