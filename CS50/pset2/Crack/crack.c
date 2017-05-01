#define _XOPEN_SOURCE

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *crypt(const char *key, const char *salt);
char *decrypt(char* hash, char* salt);

char *hash;
char salts[3];

int main(int argc, char *argv[]) {

  if(argc != 2){
    printf("Usage :./crack hash\n");
    return 1;
  }

  strncpy(salts, argv[1], 2);
  salts[2] = '\0';

  decrypt(argv[1], salts);

}

char *decrypt(char *hashh, char *salt){

  char fullset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char pass[5] = {'\0', '\0', '\0', '\0', '\0'};

  for(int i = 0; i < sizeof(fullset); i++){
    printf("%c", fullset[i]);
  }
  printf("\n");
}
