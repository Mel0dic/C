#include <stdio.h>

void sort(int values[], int n);

int main(){
  int values[8] = {9, 9, 3, 4, 1, 4, 6, 2};
  sort(values, 8);
  for(int i = 0; i < 8; i++){
    printf("%i", values[i]);
  }
  printf("\n");
}


void sort(int values[], int n)
{
    int counter[65536];
    int que = 0;
    for(int i = 0; i < 65536; i++){
      counter[i] = 0;
    }
    for(int i = 0; i < n; i++){
      counter[values[i]]++;
      printf("%i\n", values[i]);
    }
    for(int i = 0; i < 65536; i++){
      if(counter[i] > 0){
        for(int f = 0; f < counter[i]; f++){
          values[que] = i;
          que++;
        }
      }
    }
    return;
}
