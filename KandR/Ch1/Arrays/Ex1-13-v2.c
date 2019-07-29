#include <stdio.h>

#define MAX_WORD_LENGTH 20

int main(){

	int currentChar, whiteSpace, currentWordSize;
	int wordSizeCount[MAX_WORD_LENGTH];

	whiteSpace = currentWordSize = 0;

	while((currentChar = getchar()) != EOF){
		if(currentChar >= 'A' && currentChar <= 'z')
			++currentWordSize;
		else if((currentChar == ' ' || currentChar == '\t' || currentChar == '\n') && currentWordSize > 0){
			++wordSizeCount[currentWordSize - 1];
			currentWordSize = 0;
		}
		
	}

	return 0;
}