#include <stdio.h>
int main() {
	int N;
	printf("Inserire il numero di cui si vuole stampare la tabellina:\n"); 
	scanf("%d", &N);
	for (int i=1;i<10;i++ ) {
		printf("%d * %d == %d\n", N, i, N * i);
	}
	return 0;
}
