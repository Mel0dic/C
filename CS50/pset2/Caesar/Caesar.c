#include <stdio.h>
#include <stdlib.h>

char* caesar(int one);

char* word;

int c;

int main(int argc, char* argv[]) {

  if(argc == 2){
    caesar(strtol(argv[1], NULL, 10));
  }else{
    printf("Please retry\n");
  }

}

char* caesar(int one){

  while(one > 26){
    one -= 26;
  }
  printf("Please Enter A Word or Sentence: \n");

  while((c = getchar()) != EOF){
    for(int i = 0; i < one; i++){
      if(c >= 'a' && c<= 'z'){
        if(c == 'z'){
          c = 'a';
        }else{
          c++;
        }
      }else if(c >= 'A' && c<= 'Z'){
        if(c == 'Z'){
          c = 'A';
        }else{
          c++;
        }
      }
    }
    putchar(c);
  }
}
