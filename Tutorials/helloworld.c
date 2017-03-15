#include <stdio.h>
#include <stdlib.h>

int a = 1;
char fname[10];

char* printname(char names[]);

//Single

/*
   Multi
   line
 */

int main(){
        printf("Hello World\n\n");

        if(a == 1) {
                printf("1\n\n");
        }

        int something[5] = {1, 2, 3, 4, 5};

        printf("%d %lu\n\n", something[0], (sizeof(something)/sizeof(something[0])));

        printf("What is your name?\n");
        scanf("%s", fname);

        printf("\nYour name is %s\n\n", printname(fname));

        for(int i= 0; i < 10; i++){
          printf("\n%i\n", i);
        }

        return 0;
}


char* printname(char names[]){

        return names;

}
