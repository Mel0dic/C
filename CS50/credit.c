#include <stdio.h>
//#include <cs50.h>
#include <stdlib.h>

int main(){

    long long cnum;

    printf("Number: ");
    scanf("%lld", &cnum);

    while(!(cnum>0)){
          printf("Retry: ");
          scanf("%lld", &cnum);
    }

    printf("%lld\n", cnum);
    printf("%lld\n", cnum % 100);
    printf("%lld\n", cnum % 10);

}
