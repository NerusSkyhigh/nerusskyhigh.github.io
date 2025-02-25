#include <stdio.h>

int main() {
	int N;
	int prod;

	printf("Inserire un numero N\n");
	scanf("%d",&N);
	//questo esce quando c'è un overflow
	for(int i = 1; i<=N; i++ ) {
		int flag = 0;
    		for(int j = 1; j <= N; j++) {
        		prod = i*j;
			//printf("%d  ",prod);
			if (prod < 0) {
				printf("Nooooooo OVERFLOW!!!\n\tprod = %d\n",prod);
				//return 1;
				flag = 1;
				break;
			}
		}
		if ( flag ) {break;}
		printf("%d\n",prod);
	}
	
    	//for(j = N, somma = N; j > 0; j--, somma +=j); //{ }
	return 0; 
}
