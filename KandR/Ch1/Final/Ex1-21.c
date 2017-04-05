#include <stdio.h>

#define TAB 8

int c;
int count = 0;

int main(){

        while((c = getchar()) != EOF){

                if(c == ' '){
                        while((c = getchar()) == ' '){
                                count++;
                        }
                        while(count > 8){
                                putchar('\t');
                        }
                        for(int i = 0; i < count; i++){
                                putchar(' ');
                        }
                }else{
                        putchar(c);
                }

        }

}
