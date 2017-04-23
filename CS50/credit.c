#include <stdio.h>
//#include <cs50.h>
#include <stdlib.h>

int main(){

    long long cnum;

    do{
          printf("Number: ");
          scanf("%lld", &cnum);
    }while(!(cnum > 0));

    long long ccount = cnum;

    int count = 0;

    while(ccount > 0){
          ccount /= 10;
          count++;
    }

    ccount = cnum;

    int numb[count-1];

    for(int i = count; i >= 0; i--){
          numb[i] = cnum % 10;
          cnum /= 10;
    }

    // for(int i = 0; i <= count; i++){
    //       printf("%i = %i\n", i, numb[i]);
    // }

    int twos = count - 1;
    int test = 0;
    int trouble = 0;

    while(twos > 0){
          printf("%d\n", numb[twos]);
          test += numb[twos] * 2;
          twos -= 2;
    }

    twos = count;

    while(twos > 0){
          printf("%d\n", numb[twos]);
          trouble += numb[twos];
          twos -= 2;
    }

    printf("\n%d\n", test);
    printf("\n%d\n", trouble);

}
