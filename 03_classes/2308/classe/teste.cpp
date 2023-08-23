#include <iostream>

using namespace std;

class Base {
    private:
        int info;

    public:
    Base(int i = 0) {info = i;}
    int obtemInfo() {return info; }
    void defineInfo(int i) { info = i;}
};

void funcao(Base obj) {
    cout << "duncao> obj.obtemInfo() = " << obj.obtemInfo() << endl;
    int i = obj.obtemInfo();
    i++;
    obj.defineInfo(i);
    cout << "funco> obj.ObtemInfo() = " << obj.obtemInfo() << endl;
}

int main(){
    Base o(10);
    cout << "main> o.ontemInfo() = " << o.obtemInfo() << endl;
    funcao(o);
    
}