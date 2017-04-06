#include <stdio.h>

int c;

int count = scount = 0;

int main(){

        while((c = getchar()) != EOF){

                if(count > 10){

                        putchar(c);

                        while((c = getchar()) != ' '){
                          scount++;
                          putchar(c);
                        }
                        putchar('\n');
                        count = 0;

                }else{
                  putchar(c);
                  count++;
                }

        }

}
