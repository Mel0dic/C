#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void vigenere(char* one);

int word[100], key[20];

int c, count, cline, counts;

int main(int argc, char* argv[]) {

  if(argc == 2){
    vigenere(argv[1]);
  }else{
    printf("Please retry\n");
  }

}

void vigenere(char* one){

  //printf("a - 97 = %i + variable = %i %% 26 = %i + 97 = %i\n", 'a' - 97, ('a' - 97) + one, (('a' - 97) + one) % 26, ((('a' - 97) + one) % 26) + 97);

  printf("Plain Text: ");

  counts = count = 0;
  cline = strlen(one);

  for(int i = 0; i < cline; i++){
    if(islower(one[i])){
      key[i] = one[i] - 'a';
    }else if(isupper(one[i])){
      key[i] = one[i] - 'A';
    }else{
      key[i] = one[i];
    }
  }

  while((c = getchar()) != '\n'){
    word[count] = c;
    count++;
  }

  printf("Cipher Text: ");

  for(int i = 0; i < count; i++){
    if(islower(word[i])){
      printf("%c", (((word[i] - 97)+key[counts])% 26)+97);
      counts++;
    }else if(isupper(word[i])){
      printf("%c", (((word[i] - 65)+key[counts])% 26)+65);
      counts++;
    }else{
      printf("%c", word[i]);
    }
    if(counts == cline){
      counts = 0;
    }
  }
  printf("\n");
}
