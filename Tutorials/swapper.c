#include <stdio.h>
#include <stdlib.h>

int swappers(int *a, int *b);

int main(){

        int a = 10;
        int b = 20;

        printf("a is %i and b is %i\n", a, b);

        swappers(&a, &b);

        printf("a is now %i and b is now %i\n", a, b);

        swappers(&a, &b);

        printf("a is now back to %i and b is now back to %i", a, b);

}

int swappers(int *a, int *b){

        printf("\nSwapping...\n\n");

        int temp = *a;
        *a = *b;
        *b = temp;

}
