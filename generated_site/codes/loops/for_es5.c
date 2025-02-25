#include <stdio.h>

int main() {
	int j,N;
	int somma;

	printf("Inserire un numero N, il programma calcolerà la somma 1+2+...+N\n");
	scanf("%d",&N);
	/*
    	for(j = 1; j <= N; j++) {
        	somma += j;
	}
	*/
	//questo non termina mai!
	/*
    	for(j = 1; j <= N; j++) {
        	somma += j;
		N += 1;
	}
	*/
	//questo esce quando c'è un overflow
    	for(j = 1; j <= N; j++) {
        	somma += j;
		if (somma < 0) {
			printf("Nooooooo OVERFLOW!!!\n\tsomma = %d\n",somma);
			break;
		}
	}
	
    	//for(j = N, somma = N; j > 0; j--, somma +=j); //{ }
	printf("La somma dei numeri da 1 a %d vale %d\n", N, somma);
	printf("valore corretto %d\n", N*(N+1)/2);
	return 0; 
}
