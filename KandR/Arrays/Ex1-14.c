#include <stdio.h>

#define MAX 15
#define ALPHA 26
#define IN 0
#define OUT 1

int main(){

        int c, i, state;

        int lower[ALPHA], upper[ALPHA], word[MAX];

        state = IN;

        for(i = 0; i < ALPHA; i++){

                upper[i] = 0;
                lower[i] = 0;

        }

        while((c = getchar()) != EOF){

                if(c >= 65 && c <=90){

                        ++upper[c-65];

                }else if(c >= 97 && c <= 122){

                        ++lower[c-97];

                }else if(c == ' '|| c == '\n' || c == '\t'){

                        ;

                }

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

        for(i = 0; i < ALPHA; i++){

                printf("%d", digits[i]);

                for(i = 0; i < len[]; i++){



                }

                printf("\n");

        }

}
