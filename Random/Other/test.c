#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fail(void);

int main(){
	char *name = malloc(13 * sizeof(char));
	if(name == NULL){
		fail();
	}
	strcpy(name, "Ben Grummitt");
	printf("%s\n", name);
	free(name);
}

void fail(void){
	printf("memory could not be allocated\n");
	exit(EXIT_FAILURE);
}
