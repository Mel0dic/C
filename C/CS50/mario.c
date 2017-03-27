#include <stdio.h>
//#include <cs50.h>

void make();

int height;

int main(){

    do{
        printf("Height of diamond?\n");
        scanf("%d", &height);
    }while(height >= 31 || height < 0);

    //printf("%d\n", height);

    make(height);

}


void make(){

    for(int i = height; i >= 0; i--){

        for(int s = (height - i); s < height; s++){

            printf(" ");

        }

        for(int v = (height - i); v > 0; v--){

            printf("#");

        }

        printf("  ");

        for(int v = (height - i); v > 0; v--){

            printf("#");

        }

        printf("\n");

    }

}
