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

    

}
