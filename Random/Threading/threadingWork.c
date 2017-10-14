//gcc threadingWork.c -pthread -o threading.exe

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *myThreadFun(void *vargp);

int main(int argc, char *argv){

	pthread_t tid;
	printf("Before Thread\n");

	for(int i = 0; i < 3; i++){
		pthread_create(&tid, NULL, myThreadFun, (void *)i);
	}
	pthread_join(tid, NULL);
	printf("Main Finished\n");
	return 1;

}

void *myThreadFun(void *vargp){

	unsigned int sleepTime = (int)vargp;
	//printf("%i\n", sleepTime);
	sleep(3 - sleepTime);
	printf("Printing Thread %i\n", (sleepTime + 1));
	printf("Thread Finished\n");
	return NULL;

}