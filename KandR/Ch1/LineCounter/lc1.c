#include <stdio.h>

int main(){

        int lc;
        int c;

        lc = 1;

        while((c = getchar()) != EOF) {

                if(c == '\n') {
                        ++lc;
                }

        }

        printf("\n%d", lc);

}
