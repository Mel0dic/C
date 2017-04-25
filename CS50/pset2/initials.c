#include <stdio.h>

int c, count;

int upper(int c);

int name[20];

count = 0;

int main() {

  while((c = getchar()) != EOF && c != '\n'){
    name[count] = c;
    count++;
  }

  for(int i = 0; i <= count; i++){
    if(name[i] >= 'A' && name[i] <= 'Z'){
      if(name[i-1] == ' ' || i == 0){
        putchar(name[i]);
      }
    }else if((name[i] >= 'a' && name[i] <= 'z') && name[i-1] == ' '){
        putchar(upper(name[i]));
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
