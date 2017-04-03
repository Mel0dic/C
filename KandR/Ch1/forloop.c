#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){

      for(int fahr = LOWER; fahr <= UPPER; fahr += STEP){

            printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

      }

      printf("\n\n\n");

      for(int fahr2 = 300; fahr2 >= 0; fahr2 -= 20){

            printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));

      }

}
