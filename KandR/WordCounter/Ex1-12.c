#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

        int c;

        while((c = getchar()) != EOF){

            if(c == ' '){

                    while((c = getchar()) == ' '){
                          ;
                    }

                    putchar('\n');

            }else{

                    putchar(c);

            }
        }
}


// Adding a comment to test GITHUB
