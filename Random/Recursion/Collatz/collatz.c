#include <stdio.h>
#include <stdlib.h>

int collatz(int n);

int main(void){

	int* n = malloc(sizeof(int));
	scanf("%i", n);
	printf("%i\n", collatz(*n));
	free(n);

}

int collatz(int n){

	if(n == 1)
		return 0;
	else if((n % 2) == 0) 
		return 1 + collatz(n/2);
	else
		return 1 + collatz(3 * n + 1);


}