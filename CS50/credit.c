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

    int numb[count];

    for(int i = count; i > 0; i--){
          numb[i] = cnum % 10;
          cnum /= 10;
    }

    for(int i = 1; i <= count; i++){
          printf("%i = %i\n", i, numb[i]);
    }

}
