//Using \t uses different spaces so 8 spaces works fine

#include <stdio.h>

#define TAB 8

int c;
int count = 0;

int main(){

        while((c = getchar()) != EOF){

                if(c == ' '){
                        do{
                                count++;
                        }while((c = getchar()) == ' ');
                        while(count > 8){
                                //putchar('\t');
                                printf("        ");
                                count -= 8;
                        }
                        if(count > 0){
                                for(int i = 0; i < count; i++){
                                        putchar(' ');
                                }
                        }
                        count = 0;
                        putchar(c);
                }else{
                        putchar(c);
                }

        }

}
