#include <stdio.h>

int main() {
	int j;
	int k = -1;
	for(j = 2; j < 7; j+=k) {
		k++;
		j+=2;
	}
	printf("La variabile k vale %d\n", k);
	return 0; 
}
