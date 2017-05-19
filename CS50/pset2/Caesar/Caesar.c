#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void caesar(int one);

char* word;

int c;

int main(int argc, char* argv[]) {

  if(argc == 2){
    caesar(strtol(argv[1], NULL, 10));
  }else{
    printf("Please retry\n");
  }

}

void caesar(int one){

  //printf("a - 97 = %i + variable = %i %% 26 = %i + 97 = %i\n", 'a' - 97, ('a' - 97) + one, (('a' - 97) + one) % 26, ((('a' - 97) + one) % 26) + 97);

  printf("Please Enter A Word or Sentence: \n");

  while((c = getchar()) != EOF){
    if(islower(c)){
      c = (((c - 97)+one)% 26)+97;
    }else if(isupper(c)){
      c = (((c - 65)+one)% 26)+65;
    }
    putchar(c);
  }
}
