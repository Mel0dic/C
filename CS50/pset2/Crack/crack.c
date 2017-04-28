#include <stdio.h>
#include <string.h>
#define _XOPEN_SOURCE
#include <unistd.h>

char *crypt(const char *key, const char *salt);
char *decrypt(char* hash, char* salt);

char *pass, *hash;
char salts[2];

int main(int argc, char *argv[]) {

  if(argc == 2){
    hash = argv[1];
    for(int i = 0; i < 2; i++){
      salts[i] = hash[i];
    }
    decrypt(hash, salts);
  }else{
    printf("Usage :./crack hash\n");
    return 1;
  }

}

char *decrypt(char *hashh, char *salt){

  return salt;

}
