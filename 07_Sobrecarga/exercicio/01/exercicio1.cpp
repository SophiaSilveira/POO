#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

class Circulo{
    private:
        double px,py,raio;
        double calculaArea(){ return M_PI*raio*raio;}
        double calculaCircunferencia() { return 2.0*M_PI*raio;}

    public:
        Circulo() { px=py = 0.0; raio = 1.0;}
        Circulo(double r) {px = py = 0.0; raio = r;}
        Circulo(double x, double y) {px = x; py = y; raio = 1.0;}
        Circulo(double x, double y, double r) {px = x; py = y; raio = r;}
        double obtemX(){return px;}
        double obtemY(){return py;}
        double obtemRaio(){return raio;}
        void defineX(double x) { px = x;}
        void defineY(double y) { py = y;}
        void defineRaio(double r) { raio = r;}
        void escala(double e) { raio =  raio * e;}
        string str() const{
            stringstream ss;
            ss << "x: " << px << " y: " << py << " raio: " << raio;
            return ss.str();
        }
        double obtemArea() { return calculaArea();}
        double obtemCircumferencia() { return calculaCircunferencia();}

        friend ostream &operator<<( ostream &out, const Circulo &c){
            out << c.str();
            return out;
        }

        friend istream &operator>>(istream &in, Circulo &c){
            in >> c.px;
            in >> c.py;
            in >> c.raio;
            return in;
        }

        bool operator<(Circulo & c){
            return raio < c.obtemRaio();
        }

        bool operator>(Circulo &c) { 
            return raio > c.obtemRaio();
        }

};

int  main(){
    Circulo c1(1,2,3); cout << c1 << endl;
    cin >> c1;         cout << c1 << endl;
    c1.escala(2);       cout << c1 << endl;

    return 0;
}