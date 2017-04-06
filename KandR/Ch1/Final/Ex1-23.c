#include <stdio.h>

int c;
//Does Something
int main(){

        while((c = getchar()) != EOF){

                if(c == '/'){
                        if((c = getchar()) == '/'){
                                while((c = getchar()) != '\n'){
                                  ;
                                }
                        }else{
                                putchar('/');
                                putchar(c);
                        }
                }else{
                        putchar(c);
                }

        }

}
