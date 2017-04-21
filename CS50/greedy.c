#include <stdio.h>
#include <stdlib.h>
//#include <cs50.h>

float change;
int changed, one, five, ten, twentyfive;

int main(){

    changed = one = five = ten = twentyfive = 0;

    printf("How much change is owed? ");
    scanf("%f", &change);
    // while(!(change>0.00)){
    //       printf("Retry: ");
    //       change = GetFloat();
    // }

    printf("$%.2f\n", change);

    while(change > 0.001){
        //printf("%d\n", change);
        if(change > 0.25){
            twentyfive++;
            change = change - 0.25;
            //printf("%f\n", change);
        }else if(change > 0.10){
            ten++;
            change = change - 0.10;
            //printf("%f\n", change);
        }else if(change > 0.05){
            five++;
            change = change - 0.05;
            //printf("%f\n", change);
        }else if(change > 0.01){
            one++;
            change = change - 0.01;
            //printf("%f\n", change);
        }
    }

    printf("%d 25p Coins\n", twentyfive);
    printf("%d 10p Coins\n", ten);
    printf("%d 5p Coins\n", five);
    printf("%d 1p Coins\n", one);

}
