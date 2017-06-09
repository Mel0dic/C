#include <stdio.h>
#include <stdlib.h>

void points(int* que, int* quo);

int main(){

	int m = 4;
	int y = 5;

	int* some, *pk;

	some = &m;
	pk = &y;

	printf("pointer for pk = %p\npointer for some = %p\n", pk, some);

	points(&y, &m);

	printf("m is now: %i    y is now: %i\n", m, y);

}

void points(int* que, int* quo){

	int temp = *que;
	*que = *quo;
	*quo = temp;

}