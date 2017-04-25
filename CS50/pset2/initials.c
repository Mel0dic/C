#include <stdio.h>

int c;

int main() {

  while((c = getchar()) != EOF && c != '\n'){

    //printf("%c", c);

    if(c == ' '){
      while ((c = getchar()) == ' ') {
        ;
      }
      putchar(c);
    }

  }

}
