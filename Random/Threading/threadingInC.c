//gcc threadingWork.c -pthread -o threading.exe

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

#define MAXSTRINGLENGTH 10
#define MAX_SIZE 50

void *myThreadFun(void *);
void *messageFunc(void *which);

const char * wordList[10] = {"Hello", "hi", "something", "yes", "goodbye", "this", "has", "been", "random", "message"};

int decision;
int messagesMax;
int sleeptimes[10];
char messagesTable[10][MAX_SIZE];

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

	//if input was 1 generate random messages
	if(decision == 1){
		printf("Generating...\n");
		//Set random seed to time
		srand(time(NULL));
		//Generate random number of messages
		messagesMax = (rand() % (10 + 1 - 2) + 2);
		//For loop from zero to randomly generate amount of messages
		for(int messages = 0;messages <= messagesMax;messages++){
			//Inistalize string storing message
			const char * tempMessage;
			//Sleep needed to get new time and update srand
			sleep(1);
			//Set random seed to time
			srand(time(NULL));
			//Generate on random word from given list
			tempMessage = wordList[rand() % (10 + 0 - 1) + 0];
			//Set random seed to time
			srand(time(NULL));
			//Generate random sleep time and set it to tempTime
			int tempTime = rand() % (10 + 1 - 1) + 1;
			//Set sleepTime array = generated time
			sleeptimes[messages] = tempTime;
			//copy the generated string onto the array
			strcpy(messagesTable[messages], tempMessage);
		}

		printf("Done\n");

	}else if(decision == 2){

		char continuation;
		int inputTime;
		//Initialize inputMessage to the Ma string length + 1 for \0 then * that by the size of a char
		unsigned char* inputMessage = malloc((MAX_SIZE+1) * sizeof(char));

		int incrementor = 0;

		//Create an infinit loop
		while(1){

			//Ask for message
			printf("Enter your message: ");
			scanf("%s", inputMessage);
			//Ask for sleep time
			printf("Enter the sleep time for that message: ");
			scanf("%i", &inputTime);
			//Ask if user would like to continue
			printf("If you would like to continue enter Y: ");
			scanf(" %c", &continuation);

			//set sleeptime array to inputTime
			sleeptimes[incrementor] = inputTime;
			//copy the generated string onto the array
			strcpy(messagesTable[incrementor], inputMessage);

			//If user doesn't want to continue break out of loop
			if(continuation != 'y' && continuation != 'Y'){
				break;
			}

			//Increment incrementor
			incrementor++;

		}

		messagesMax = incrementor;

		//free input message from earlier assignment
		free(inputMessage);

	}

	//For i in array size create thread passing position in array to messageFunc function
	for(int i = 0; i <= messagesMax; i++){
		pthread_create(&tid, NULL, messageFunc, (void *)i);
	}

	return pthread_join(tid, NULL);

}



void *myThreadFun(void *vargp){
	//Setting the void argument into an int
	unsigned int sleepTime = (int)vargp;
	//Print thread number and sleep time
	printf("Thread %i sleeping for %i seconds\n", sleepTime, (sleepTime + 1));
	//Sleep for sleep time + 1
	sleep(sleepTime + 1);
	printf("Finished Sleeping From Thread %i\n", sleepTime);
	return NULL;

}

void *messageFunc(void *which){
	//Setting the void argument into an int
	unsigned int arrayPosition = (int)which;
	//Aceess the global var sleepTime use argument to sleep for that time
	sleep(sleeptimes[arrayPosition]);
	//Access the global var sleepTime use argument to access message
	printf("%s\n", messagesTable[arrayPosition]);
	return NULL;
}