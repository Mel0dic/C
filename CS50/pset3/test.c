#include <stdio.h>

void init(void);
void print(void);

int main(){
  init();
  print();
}

int something[5][5];

void init(void)
{
    for(int i = 0; i < 5; i++){
      int m = i + 1;
      for(int j = 0; j < 5; j++){
        something[i][j] = 5*5 - (m + 5 + j);
      }
    }
}

void print(void){
  for(int l = 0; l < 5; l++){
    for(int f = 0; f < 5; f++){
      printf("%i ", something[l][f]);
    }
    printf("\n");
  }
}
