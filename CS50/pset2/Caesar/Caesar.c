#include <stdio.h>

int i;

int main(int argc, char* argv[]) {

      printf("%i\n", argc);

      for(i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
      }

}
