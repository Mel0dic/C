#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(int value, int values[], int n);

int min, max;

int list[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
  if(search(2, list, 9) == true){
      printf("True");
  }
}

bool search(int value, int values[], int n)
{
    //int size = sizeof(values)/sizeof(values[0])
    int half = (n / 2) - 1;
    min = 0;
    max = n;
    // TODO: implement a searching algorithm
    while(n > 0){
      if(values[half] == value){return true;}
      else if(values[half - 1] < value){min += half/2;}
      else if(values[half - 1] > value){max -= half/2}
      n = n-1;
    }
    return false;
}
