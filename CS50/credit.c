#include <stdio.h>
//#include <cs50.h>
#include <stdlib.h>

int main(){

    long long cnum;

    //Ask for input

    do{
          printf("Number: ");
          scanf("%lld", &cnum);
    }while(!(cnum > 0)||cnum == NULL);

    long long ccount = cnum;

    int count = 0;

    //Counting number of letters

    while(ccount > 0){
          ccount /= 10;
          count++;
    }

    ccount = cnum;

    int numb[count-1];

    //input numbers into an array

    for(int i = count - 1; i >= 0; i--){
          //printf("%d = %d\n", i, cnum % 10);
          numb[i] = cnum % 10;
          cnum /= 10;
    }

    // for(int i = 0; i <= count; i++){
    //       printf("%i = %i\n", i, numb[i]);
    // }

    int twos = count - 2;
    int test = 0;
    int trouble = 0;

    //starting with the second to last number * 2 and then every other number going back

    while(twos >= 0){
          //printf("twos = %d = %d\n", twos, numb[twos]);
          if(numb[twos] * 2 > 9){
            test += (numb[twos] * 2) % 10;
            test += ((numb[twos] * 2) - ((numb[twos] * 2) % 10)) / 10;
          }else{
            test += numb[twos] * 2;
          }
          twos -= 2;
    }

    twos = count - 1;

    //starting with the last number add every other number to the total number

    while(twos >= 0){
          //printf("%d\n", numb[twos]);
          trouble += numb[twos];
          twos -= 2;
    }

    if((test + trouble) % 10 == 0){
          printf("\nValid\ntest = %d\ntrouble = %d\n\n", test, trouble);
          printf("%d %d%d\n", count, numb[0], numb[1]);
    }else{
          printf("\nInvalid Number\n");
    }

}
