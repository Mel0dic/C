#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main(void){

	int* factor = malloc(sizeof(int));
	scanf("%i", factor);
	printf("%i\n", fact(*factor));
	free(factor);

}

int fact(int n){

	if(n == 1)
		return 1;
	else
		return n * fact(n - 1);

}