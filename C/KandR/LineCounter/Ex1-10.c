#include <stdio.h>
#include <stdlib.h>

int main() {

      int c, yn;

      while((c = getchar()) != EOF){

            yn = 0;

            if(c == '\t'){
                  printf("\\t");
                  yn = 1;
            }
            if(c == '\b'){
                  printf("\\b");
                  yn = 1;
            }
            if(c == '\\'){
                  printf("\\\\");
                  yn = 1;
            }
            if(yn == 1){
                  putchar(c);
            }

      }

}
