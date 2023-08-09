#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void bubble_sort(int *vet, int tam) {
	int troca;
	do {
		troca = 0;
		for (int i=0; i<tam-1; ++i) {
			if (vet[i] > vet[i+1]) {
				int aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				troca = 1;
			}
		}
	} while (troca);
}

int esta_ordenado(int *vet, int tam) {
	for (int i=0; i<tam-1; ++i)
		if ( vet[i] > vet[i+1] )
			return 0;
	return 1;
}

#define INI 1000                // Para compilar: gcc -o bubble_sort bubble_sort.c
#define FIM 10000		// Para executar: ./bubble_sort > curva1.txt
#define INC 10

int main () {
	struct timeval antes , depois ;
	int * vetor = malloc ( sizeof ( int ) * FIM );
	if ( vetor == NULL ) return 1;
	for (int total = INI ; total <= FIM ; total += INC) {
		for (int pos =0; pos < total ; pos ++) // preenche o vetor
			vetor [ pos ] = total - pos ;
		gettimeofday (& antes , NULL );
		bubble_sort(vetor , total);
		gettimeofday (& depois , NULL );
		if ( !esta_ordenado(vetor,total) ) return 1;
		unsigned long microssegundos = ( depois.tv_sec - antes.tv_sec ) * 1000000 +
						 depois.tv_usec - antes.tv_usec ;
		printf ("%d %lu\n", total , microssegundos );
	}
	free( vetor );
	return 0;
}