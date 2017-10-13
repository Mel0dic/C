//gcc threadingExample.c -pthread -o threading.exe

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *myThreadFun(int *vargp);

int main(int argc, char *argv){

	pthread_t tid;
	printf("Before Thread\n");

	for(int i = 0; i < 3; i++){
		pthread_create(&tid, NULL, myThreadFun, &i);
	}
	pthread_exit(NULL);
	printf("After World\n");
	return 1;

}

void *myThreadFun(int *vargp){

	int sleepTime = vargp;
	sleep(sleepTime);
	printf("Printing Thread\n");
	return NULL;

}