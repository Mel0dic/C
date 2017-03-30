#include <stdio.h>

#define MAX 15
#define ALPHA 26
#define IN 0
#define OUT 1

int main(){

        int c, x, i, state, lett;

        int lower[ALPHA], upper[ALPHA], word[MAX];

        state = IN;

        lett = 65;

        for(i = 0; i < ALPHA; i++) {

                upper[i] = 0;
                lower[i] = 0;

        }

        while((c = getchar()) != EOF) {

                if(c >= 65 && c <=90) {

                        ++upper[c-65];

                }else if(c >= 97 && c <= 122) {

                        ++lower[c-97];

                }

        }


        for(i = 0; i < ALPHA; i++) {

                printf("%c - %3d : ", lett, (upper[i] + lower[i]));

                for(x = 0; x < (upper[i] + lower[i]); x++){

                        printf("*");

                }

                printf("\n");

                lett++;

        }

        // for(i = 0; i < ALPHA; i++){
        //
        //       printf("%d",upper[i]);
        //
        // }
        //
        // printf("\n");
        //
        // for(i = 0; i < ALPHA; i++){
        //
        //       printf("%d",lower[i]);
        //
        // }
        
}
