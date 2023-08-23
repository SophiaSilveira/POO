#include <iostream>

using namespace std;

void swap1( int a, int b){
    int aux = a;
    a = b;
    b = aux;
}

void swap2( int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void swap3( int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int main(){
    int a = 123, b = 456;

    cout << "...swap1(a, b)..." << endl;
    cout << "a = " << a << " / b = " << b << endl;
    swap1(a, b);
    cout << "a = " << a << " / b = " << b << endl;

    cout << "...swap2(a, b)..." << endl;
    cout << "a = " << a << " / b = " << b << endl;
    swap2(&a, &b);
    cout << "a = " << a << " / b = " << b << endl;

    cout << "...swap3(a, b)..." << endl;
    cout << "a = " << a << " / b = " << b << endl;
    swap3(a, b);
    cout << "a = " << a << " / b = " << b << endl;



}

