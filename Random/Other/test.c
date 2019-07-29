#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void fail(void);

int main(){
	printf("Hello world");
	//printf("%d\n", 0b1010 | 0b0101);
}

void mallocTest(){
	char *name = malloc(11  * sizeof(char));
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
