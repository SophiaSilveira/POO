#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

#define MAX_ALUNOS 10

class Aluno { 
    private:
        int matricula;
        string nome;
        double nota;
    
    public:
        Aluno(){
            matricula = 0;
            nome = "";
            nota = -1.0;
        }

        Aluno(int mat, string nom, double nt){
            matricula = mat;
            nome = nom;
            nota = nt;
        }

        int obtemMatricula(){
            return matricula;
        }

        string obtemNome(){
            return nome;
        }

        double obtemNota(){
            return nota;
        }

        void defineMatricula(int mat){
            matricula = mat;
        }

        void defineNome(string nom){
            nome = nom;
        }

        void defineNota(double nt){
            nota = nt;
        }

        string str(){
            stringstream ss;
            stringstream nota_ss;

            ss.fill('0');

            ss << nome << " (" << setw(10) << matricula << ")";
            string ss_str = ss.str();

            if(nota != -1.0){
                
                nota_ss << ": " << fixed << setprecision(4) << nota << endl;
                return ss_str + nota_ss.str();
            }

            nota_ss << endl;

            return ss_str + nota_ss.str();
        }
};

class Turma {
    private:
        int numeroTurma, numeroAlunos;
        string nomeDisciplina, nomeProfessor;
        Aluno *alunos[10];

    public:
        Turma(){
            numeroTurma = numeroAlunos = 0;
            nomeDisciplina = nomeProfessor = "";
        }

        Turma(int numeroT, string disciplina, string professor){
            numeroTurma = numeroT;
            nomeDisciplina = disciplina;
            nomeProfessor = professor;
            numeroAlunos = 0;
        }

        int obtemNumero(){
            return numeroTurma;
        }

        string obtemDisciplina(){
            return nomeDisciplina;
        }

        string obtemProfessor(){
            return nomeProfessor;
        }

        Aluno* obtemAluno(int indice){
            if(indice < 0 || indice > (numeroAlunos - 1) || numeroAlunos <= 0 ) return nullptr;
            return alunos[indice];
        }

        int obtemNumAlunos(){
            return numeroAlunos;
        }

        void defineNumero(int numeroT){
            numeroTurma = numeroT;
        }

        void defineDisciplina(string disciplina){
            nomeDisciplina = disciplina;
        }

        void defineProfessor(string professor){
            nomeProfessor = professor;
        }

        bool adicionaAluno(Aluno *aluno){
            if(numeroAlunos >= 10) return false;

            alunos[numeroAlunos] = aluno;
            numeroAlunos++;

            return true;
        }

        double calculaMedia(){
            if(numeroAlunos <= 0) return -1.0;
            double divAlunos = numeroAlunos * 1.0;
            double media = 0.0;

            for(int i = 0; i < numeroAlunos; i++){
                double nota = alunos[i]->obtemNota();

                if(nota > -1.0){
                    media += nota;
                }
                else{
                    divAlunos--;
                }
               
            }

            return media/divAlunos;
        }

        string str(){
            stringstream ss;
            string aluno;

            ss << numeroTurma << " - " << nomeDisciplina << " - Prof. " << nomeProfessor << endl;
            string ss_str = ss.str();
           
            if(numeroAlunos > 0){

                for(int i = 0; i < numeroAlunos; i++){
                    aluno +=  alunos[i]->str();
                }

                stringstream media;
                
                media << "MEDIA = " << fixed << setprecision(4) << calculaMedia() << endl;
            return ss_str + aluno + media.str();
            }

            return ss_str;
        }        

 };

int main() {

 
    Aluno *discente[] = {
        new Aluno(1,"Benedito",9.1),
        new Aluno(2,"Carlos",8.2),
        new Aluno(3,"Daniela",7.3),
        new Aluno(4,"Elisabeth",6.4),
        new Aluno(5,"Fernanda",5.5),
        new Aluno(6,"Gilson",9.6),
        new Aluno(7,"Heitor",8.5),
        new Aluno(8,"Irineu",7.4),
        new Aluno(9,"Joana",3.2),
        new Aluno(10,"Klaus",-1.0),
        new Aluno(11,"Laura",9.8)
    };


    int numDiscentes = sizeof(discente)/sizeof(Aluno *);

    
    Turma *turma = new Turma(0,"SEM ALUNOS","INDEFINIDO");
    int a;
    cout << turma->str() << endl;
    turma->defineNumero(123);
    turma->defineDisciplina("Linguagem C");
    turma->defineProfessor("Alberto");
    for (a=0; a<5; ++a)
        if (!turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }
    for (a=0; a<5; ++a)
        if (turma->obtemAluno(a) != discente[a]) { cerr << "ERRO"; exit(1); }
    for (; a<numDiscentes; ++a)
        if (turma->obtemAluno(a) != nullptr) { cerr << "ERRO"; exit(1); }

    cout << turma->str() << endl;

    for (a=5; a<MAX_ALUNOS; ++a)
            if (!turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }
    for (; a<numDiscentes; ++a)
        if (turma->adicionaAluno(discente[a])) { cerr << "ERRO"; exit(1); }

    for (a=0; a<MAX_ALUNOS; ++a)
        if (turma->obtemAluno(a) != discente[a]) { cerr << "ERRO"; exit(1); }

    cout << turma->str() << endl;

    delete turma;
    for (int i=0; i<numDiscentes; ++i)
        delete discente[i];
    return 0;

}
