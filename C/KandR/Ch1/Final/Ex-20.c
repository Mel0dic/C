#include <stdio.h>

#define TAB 8

int c;
int count = 0;

int main(){

        while((c = getchar()) != EOF){

                if(c == '\t'){
                        for(int i = 0; i <= TAB-(count % TAB); ++i){
                                putchar(' ');
                        }
                        count = 0;
                }else if(c == '\n'){
                        putchar(c);
                        count = 0;
                }else{
                        putchar(c);
                        ++count;
                }

        }

}
