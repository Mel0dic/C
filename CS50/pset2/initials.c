#include <stdio.h>

int c;

int upper(int c);

int main() {

  if((c = getchar()) != ' '){
    putchar(upper(c));
  }

  while((c = getchar()) != EOF && c != '\n'){

    //printf("%c", c);

    if(c == ' '){
      while ((c = getchar()) == ' ') {
        ;
      }
      putchar(upper(c));
    }else if(c >= 'A' && c <= 'Z'){
      putchar(c);
    }

  }

}

int upper(int c){

  if(c >= 'A' && c <= 'Z'){
    return c;
  }else if(c >= 'a' && c <= 'z'){
    return c - 32;
  }

}
