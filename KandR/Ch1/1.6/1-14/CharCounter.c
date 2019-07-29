#include <stdio.h>

#define NUMBER_OF_CHARACTERS 26

int main() {

	int c, maxLetterNumber;
	int CharCounter[NUMBER_OF_CHARACTERS];

	for(int i = 0; i < NUMBER_OF_CHARACTERS; i++){
		CharCounter[i] = 0;
	}

	while((c = getchar()) != EOF){
		if(c >= 'a' && c <= 'z'){
			++CharCounter[c - 'a'];
		}else if(c >= 'A' && c <= 'Z'){
			++CharCounter[c - 'A'];
		}
	}

	maxLetterNumber = 0;

	for(int i = 0; i < NUMBER_OF_CHARACTERS; i++){
		if(CharCounter[i] > maxLetterNumber){
			maxLetterNumber = CharCounter[i];
		}
	}

	for(int i = maxLetterNumber; i > 0; i--){
		printf("%3d|", i);
		for(int j = 0; j < NUMBER_OF_CHARACTERS; j++){
			printf("%2c", CharCounter[j] <= (i - 1) ? ' ' : '|');
		}
		printf("\n");
	}

	printf("    ");
	for(int i = 0; i < NUMBER_OF_CHARACTERS; i++){
		printf("--");
	}
	printf("\n");

	printf("    ");
	for(int i = 0; i < NUMBER_OF_CHARACTERS; i++){
		printf("%2c", i + 'A');
	}
	printf("\n");

	return 0;
}