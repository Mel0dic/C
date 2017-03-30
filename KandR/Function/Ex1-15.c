#include <stdio.h>

int weather(int f);

int temp;

int main() {

        printf("Enter a temp in f: ");

        scanf("%d", &temp);

        printf("%d", weather(temp));

}

int weather(int f){

      return 5 * (f-32) / 9;

}
