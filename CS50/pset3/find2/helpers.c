/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

int min, max, half, holder;

 bool search(int value, int values[], int n)
 {
     if(n < 0){return false;}
     min = 0;
     max = n - 1;
     // TODO: implement a searching algorithm
     while(n > 0){
       half = (min+max)/2;
       if(values[half] == value){return true;}
       else if(values[half] < value){min = half+1;}
       else{max = half-1;}
       n = max - min + 1;
     }
     return false;
 }



/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int counter[65536];
    int que = 0;
    for(int i = 0; i < 65536; i++){
      counter[i] = 0;
    }
    for(int i = 0; i < n; i++){
      counter[values[i]]++;
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
