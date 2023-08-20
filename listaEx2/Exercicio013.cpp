#include <iostream>

using namespace std;

void imprimeValor(int start, int final){
    for(int i = 1; i <= final; i++){
        if(i < start) cout << "  ";
        else cout << i << " ";
    }
    cout << endl;
    if((start + 1) == (final + 1)) return;
    imprimeValor(start + 1, final -1);
}

int main(){
    int n = 0;

    while((n % 2) == 0)
    cin >> n;
    
    imprimeValor(1, n);

   return 0;
}
