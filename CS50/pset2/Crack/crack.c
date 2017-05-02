#define _XOPEN_SOURCE

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *crypt(const char *key, const char *salt);
int decrypt(char* hash, char* salt);
void plusplus(char string[], int some);

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

int decrypt(char *hashh, char *salt){

  //char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char pass[5] = {'\0', '\0', '\0', '\0', '\0'};

  do{
    if(strcmp(hashh, crypt(pass, salt)) == 0){
        printf("The Password Is: %s", pass);
        printf("\n");
        return 0;
    }
    plusplus(pass, 0);
  }while(pass[4] == '\0');

  // for(int i = 0; i < sizeof(alpha); i++){
  //   printf("%c", alpha[i]);
  // }

  printf("\n");
  return 1;
}

void plusplus(char string[], int some){

  if(string[some] == '\0'){
    string[some] = 'a';
  }else if(string[some] == 'z'){
    string[some] = 'A';
  }else if(string[some] == 'Z'){
    string[some] = 'a';
    plusplus(string, some+1);
  }else{
    string[some]++;
  }

}
