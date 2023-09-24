#include "stdio.h"

int seculo(int s){
    int resto = s % 100;
    int div = s /100;

    if(div == 0){
        return 1;
    }
    else if(resto == 0){
        return div;
    }

    return div+1;   
}

int main(){
    int sec;

    scanf("%d", &sec);

    sec = seculo(sec);

    printf("%d", sec);

    return 1;
}