//gcc threadingWork.c -pthread -o threading.exe

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>



int decision;
char* messageTable = [];
int timeTable = [];



void *myThreadFun(void *vargp);



int main(int argc, char *argv){

	pthread_t tid;

	//Crate a for loop iterating 1, each time creating a thread with each iteration.
	//Giving argument i as function argument
	for(int i = 0; i < 10; i++){
		pthread_create(&tid, NULL, myThreadFun, (void *)i);
	}
	pthread_join(tid, NULL);

	//Ask for input of either 1 or 2 and while input is not 1 or 2 ask again until valid
	//input given
	do{
		printf("Enter 1 for random generation, enter 2 to input message: ");
		scanf("%i", &decision);
	}while(decision != 1 && decision != 2);

	if(decision == 1){
		srand(time(NULL));
		for(int messages = 0;messages < (rand() % (10 + 1 - 1) + 1);messages++){
			char *tempMessage;
			srand(time(NULL));
			for(int word; word < (rand() % (7 + 1 - 2) + 2); word++){
				tempMessage = strcat(tempMessage, wordList[rand() % (10 + 1 - 1) + 1])
			}

			int tempTime = rand() % (10 + 1 - 1) + 1

		}
	}

	return 1;

}



void *myThreadFun(void *vargp){

	unsigned int sleepTime = (int)vargp;
	//printf("%i\n", sleepTime);
	printf("Thread %i sleeping for %i seconds\n", sleepTime, (sleepTime + 1));
	sleep(sleepTime + 1);
	printf("Finished Sleeping From Thread %i\n", sleepTime);
	return NULL;

}