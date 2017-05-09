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

bool search(int value, int values[], int n){
  //int size = sizeof(values)/sizeof(values[0])
  int half = values[(n/2)];
  // TODO: implement a searching algorithm
  while(n > 0){
    n -= 1;
    if(values[n/2] == value){return true;}
    else if(half > value){n /= 2;}
    else if(half < value){n += n/2;}
  }
  return false;
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
