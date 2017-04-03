#include <stdio.h>

int main(){

        int lc, c, tabs, blanks;

        lc = 1;
        tabs = 0;
        blanks = 0;

        while((c = getchar()) != EOF) {

                if(c == '\t') {
                        ++tabs;
                }else if(c == ' '){
                        ++blanks;
                }else if(c == '\n'){
                        ++lc;
                }

        }

        printf("\n%d", lc);
        printf("\n%d", tabs);
        printf("\n%d", blanks);

}
