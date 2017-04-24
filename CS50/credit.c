#include <stdio.h>
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

    //Check for different types of cards

    if((test + trouble) % 10 == 0){
          if(count == 15 && (numb[0] == 3 && (numb[1] == 7 || numb[1] == 4))){
            printf("Amex");
          }else if(count == 16 && (numb[0] == 5 && (numb[1] == 1 || numb[1] == 2 || numb[1] == 3 || numb[1] == 4 || numb[1] == 5))){
            printf("MasterCard");
          }else if((count == 13 || count == 16) && (numb[0] == 4)){
            printf("Visa");
          }else{
            printf("\nInvalid Number\n");
          }
    }else{
          printf("\nInvalid Number\n");
    }

}
