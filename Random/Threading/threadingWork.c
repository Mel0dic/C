//gcc threadingWork.c -pthread -o threading.exe

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#define MAXSTRINGLENGTH 10

int decision;

const char * wordList[10] = {"Hello", "hi", "something", "yes", "goodbye", "this", "has", "been", "random", "message"};

void *myThreadFun(void *);

char* concatinate(const char *, const char *);



int main(int argc, char *argv){

	printf("%s\n", wordList[0]);

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
		printf("Generating...\n");
		srand(time(NULL));
		int messagesMax = (rand() % (10 + 1 - 1) + 1);
		int timeTable[messagesMax-1];
		char* messageTable[messagesMax-1];
		for(int messages = 0;messages < messagesMax;messages++){
			const char * tempMessage;
			//Sleep needed to get new time and update srand
			sleep(1);
			srand(time(NULL));
			for(int word; word < (rand() % (7 + 1 - 2) + 2); word++){
				tempMessage = concatinate(tempMessage, wordList[rand() % (10 + 0 - 1) + 0]);
				printf("%s\n", tempMessage);
			}
			srand(time(NULL));
			int tempTime = rand() % (10 + 1 - 1) + 1;

			//printf("%s\n", tempMessage);
			timeTable[messages] = tempTime;
			messageTable[messages] = tempMessage;
		}

		for(int i = 0; i < messagesMax; i++){
			printf("%i, %s\n", timeTable[i], messageTable[i]);
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

char* concatinate(const char *stringOne, const char *stringTwo){

	char *returnValue = malloc(strlen(stringOne) + strlen(stringTwo) + 1);

	strcpy(returnValue, stringOne);
	strcpy(returnValue, " ");
	strcpy(returnValue, stringTwo);
	return returnValue;

}