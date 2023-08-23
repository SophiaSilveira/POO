#include <iostream>

using namespace std;

//struc e class é a mesma coisa mas a classe pode privar algo e a struct não

struct S{ // publico
    int atrib1;
    private:
    int atrib2;
    public:
    S(int par1, int par2) {atrib1 = par1; atrib2 = atrib2;}
    int obtemAtrib1() { return atrib1;}
    int obtemAtrib2() { return atrib2; }
};

class C {//pode ter privado
    int atrib1;
    private:
    int atrib2;
    public:
    C(int par1, int par2) {atrib1 = par1; atrib2 = atrib2;}
    int obtemAtrib1() { return atrib1;}
    int obtemAtrib2() { return atrib2; }
};

int main(){
    S s(1,2);
    s.atrib1 = 3;

    cout << "S.atrib1" << s.atrib1 << endl;
    cout << "S.obtemAtrib1() = " << s.obtemAtrib1() << endl;
    cout << "S.obtemAtrib2() = " << s.obtemAtrib2() << endl;

    C c(5,6);
    //c.atrib1 = 7;
    //cout << "S.atrib1" << c.obtemAtrib1 << endl;
    cout << "S.obtemAtrib1() = " << c.obtemAtrib1() << endl;
    cout << "S.obtemAtrib2() = " << c.obtemAtrib2() << endl;


    return 0;
}

