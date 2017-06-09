#include <stdio.h>
#include <stdlib.h>

int main(){

	int x;
	//Get int from user
	scanf("%i", &x);

	//array of floats on the stack
	float stack_array[x];

	//array of floats on the heap
	float* heap_array = malloc(x * sizeof(float));

	printf("%i\n", x);

	free(heap_array);


	//create a pointer to a bit of memory large enough to store an int
	int* b = malloc(sizeof(int));

	*b = 5;

	printf("%i\n", *b);

	free(b);

}
