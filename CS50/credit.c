#include <stdio.h>
//#include <cs50.h>
#include <stdlib.h>

int main(){

    long long cnum;

    do{
          printf("Number: ");
          scanf("%lld", &cnum);
          printf("%lld\n", cnum);
    }while(!(cnum>0));

    printf("%lld\n", ((cnum % 100) - (cnum % 10)) / 10);

}
