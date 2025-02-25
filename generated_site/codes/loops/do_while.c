#include <stdio.h>

int main()
{
	int N;
	int num;
	double sum = 0.;
	printf("Calcola la somma di numeri dati in input. Digitare 0 e premere invio per terminare\n");
	do {
		N = scanf("%d",&num);
		sum += num;
	}while(num != 0); 
	return 0;
}

		
