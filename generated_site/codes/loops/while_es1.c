#include <stdio.h>

int main() {
	int i = 1, N;
	printf("Inserire il numero di cui si vuole stampare la tabellina:\n"); 
	scanf("%d", &N);
	do { // se i non fosse inizializzata sarebbe un disastro... 
		i++;
		printf("%d * %d == %d\n", N, i, N * i);
	}while(i < 10);
	return 0;
}
