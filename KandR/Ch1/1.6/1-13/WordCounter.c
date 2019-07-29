#include <stdio.h>

#define MAX_WORD_LENGTH 20

int main(){

	int currentChar, whiteSpace, currentWordSize;
	int wordSizeCount[MAX_WORD_LENGTH];

	whiteSpace = currentWordSize = 0;

	// Initialise array to 0
	for(int i = 0; i < MAX_WORD_LENGTH; i++){
		wordSizeCount[i] = 0;
	}

 	// Count the sizes of the words
	while((currentChar = getchar()) != EOF){

		if(currentChar >= 'A' && currentChar <= 'z')
			++currentWordSize;
		else if((currentChar == ' ' || currentChar == '\t' || currentChar == '\n') && currentWordSize > 0){
			++wordSizeCount[currentWordSize - 1];
			currentWordSize = 0;
		}
		
	}

	int max_number_of_words, max_word_length_counted;
	max_number_of_words = max_word_length_counted = 0;

	for(int i = 0; i < MAX_WORD_LENGTH; i++){
		if(wordSizeCount[i] > max_number_of_words){
			max_number_of_words = wordSizeCount[i];
		}
		if(wordSizeCount[i] > 0){
			max_word_length_counted = i + 1;
		}
	}

	// Print the graph with max numbers
	for(int i = max_number_of_words; i > 0; i--){
		printf("%3d|", i);
		for(int j = 0; j < max_word_length_counted; j++){
			printf("%2c", wordSizeCount[j] <= (i - 1) ? ' ' : '|');
		}
		printf("\n");
	}

	// Print line of - under graph
	printf("    ");
	for(int i = 0; i < max_word_length_counted; i++){
		printf("--");
	}
	printf("\n");

	// Print the word length under line for frequency of length
	printf("    ");
	for(int i = 0; i < max_word_length_counted; i++){
		printf("%2d", i+1);
	}
	printf("\n");

	return 0;
}