#include <stdio.h>

int c;

int count = 0;

int main(){

        while((c = getchar()) != EOF){

                if(count > 80){
                        
                        putchar(c);

                        while((c = getchar()) != ' '){
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
