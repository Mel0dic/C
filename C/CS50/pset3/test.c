#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(int value, int values[], int n);

int min, max, half;

int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(){
  if(search(9, list, 10) == true){
      printf("True");
  }
}

bool search(int value, int values[], int n)
{
    //int size = sizeof(values)/sizeof(values[0])
    min = 0;
    max = n - 1;
    // TODO: implement a searching algorithm
    while(n > 0){
      half = (min+max)/2;
      if(values[half] == value){
        return true;
      }else if(values[half] < value){
        min = half+1;
      }else{
        max = half-1;
      }
      n = max - min + 1;
    }
    return false;
}
