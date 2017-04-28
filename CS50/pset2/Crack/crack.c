#include <stdio.h>
#define _XOPEN_SOURCE
#include <unistd.h>

char *crypt(const char *key, const char *salt);

int main(int argc, char* argv[]) {

  if(argc == 2){
    printf("%s\n", crypt(argv[1], "Ben"));
  }else{
    printf("Usage :./crack hash\n");
    return 1;
  }

}
