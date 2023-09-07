/*
Nome do arquivo: Exercicio013
Nome do autor: Sophia Mendes da Silveira
Finalidade do programa: Classe Ponto
Data de criacao: 25/08/2023
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// implementacao da classe Ponto
class UnidadeFederativa { 
    private:
        string nome, sigla, capital;
        double area;
        int populacao;

    public:
        UnidadeFederativa(){
            nome = "";
            sigla = "";
            capital = "";
            area = 0;
            populacao = 0;
        }

        UnidadeFederativa(string nomeF, string siglaF, string capitalF, double areaF, double populacaoF){
            nome = nomeF;
            sigla = siglaF;
            capital = capitalF;
            area = areaF;
            populacao = populacaoF;
        }

        string obtemNome(){
            return nome;
        }

        void defineNome(string nomeF){
            nome = nomeF;
        }

        string obtemSigla(){
            return sigla;
        }

        void defineSigla(string siglaF){
            sigla = siglaF;
        }

        string obtemCapital(){
            return capital;
        }

        void defineCapital(string capitalF){
            capital = capitalF;
        }

        double obtemArea(){
            return area;
        }

        void defineArea(double areaF){
            area = areaF;
        }

        int obtemPopulacao(){
            return populacao;
        }

        void definePopulacao(int populacaoF){
            populacao = populacaoF;
        }

        double obtemDensidade(){
            if(area > 0 ) return (populacao * 1.0)/ area;
            return populacao;
        }

};

void mostraUF(UnidadeFederativa &uf) {
    cout << uf.obtemNome() << " (" << uf.obtemSigla() << ") - " << uf.obtemCapital();
    cout << " - Area = " << fixed << setprecision(4) << uf.obtemArea();
    cout << " - Pop. = " << uf.obtemPopulacao();
    cout << " - Densidade = " << fixed << setprecision(4) << uf.obtemDensidade() << endl;
}

int main() {
    UnidadeFederativa rs;
    mostraUF(rs);
    rs.defineNome("Rio Grande do Sul");
    rs.defineSigla("RS");
    rs.defineCapital("Porto Alegre");
    rs.defineArea(281748.5);
    rs.definePopulacao(11228091);
    mostraUF(rs);
    UnidadeFederativa sc("Santa Catarina","SC","Florianopolis",95346.2,6734568);
    mostraUF(sc);
    for (int i=0; i<10; ++i) {
        sc.definePopulacao( sc.obtemPopulacao()+100000 );
        mostraUF(sc);
    }
    return 0;
}
