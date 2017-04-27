#include <stdio.h>
#include <string.h>
#include <ctype.h>

void begin(char* word);

int main(int argc, char* argv[]) {
  //Check for secondary command line input
  if(argc == 2){
      begin(argv[1]);
  }
}

//create two arrays
char input[100];
int counter[20];

int c, count, something, counters;

void begin(char* word){
  //set count to 0
  count = 0;

  printf("%s\n", word);

  printf("Please Input Your Cipher Text: \n");

  while((c = getchar()) != '\n'){
    input[count] = c;
    count++;
  }

  something = strlen(word);

  for(int i = 0; i < something; i++){
    if(islower(word[i])){
      counter[i] = word[i] - 'a';
    }else if(isupper(word[i])){
      counter[i] = word[i] - 'A';
    }
  }

  printf("Cipher Text: ");

  counters = 0;

  for(int i = 0; i < count; i++){
    if(islower(word[i])){
        printf("lower");
      printf("%c\n", (((word[i] - 97)+counter[counters])% 26)+97);
      counters++;
    }else if(isupper(word[i])){
    printf("upper");
      printf("%c\n", (((word[i] - 97)+counter[counters])% 26)+97);
      counters++;
    }else{
      printf("%c\n", word[i]);
    }
    if(counters == something){
      counters = 0;
    }
  }

  printf("\n");

}
