#include <stdio.h>

int main(){

        int c;

        while((c = getchar()) != EOF) {

              if(c == ' '){
                  while((c = getchar()) == ' '){

                  }
                  if(c == EOF){
                    break;
                  }
                  putchar(' ');
              }

              putchar(c);

        }

}
