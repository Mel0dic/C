#include <stdio.h>

int c;
int count;
int scount;

int main(){

        count = scount = 0;

        while((c = getchar()) != EOF){

                if(count > 20){

                        putchar(c);

                        while((c = getchar()) != ' ' && scount < 5){
                          scount++;
                          putchar(c);
                        }
                        if(scount >= 9){
                                putchar('-');
                        }
                        putchar('\n');
                        if(scount >= 9){
                                putchar(c);
                        }
                        scount = 0;
                        count = 0;

                }else{
                  putchar(c);
                  count++;
                }

        }

}
