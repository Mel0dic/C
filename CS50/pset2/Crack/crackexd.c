#include <stdio.h>

int main(){


    int i = 0, j, k;
    int minChar, maxChar, maxLen, arraySize;

    /*
    It is stated that password can be up to 8 char long
    and might contain any ascii printable char (32 -> 126)
    For testing I've set max lenght to 5 and alphabet to 48 -> 57
    */

    maxLen = 5;             // password max chars
    minChar = 48;           // ascii inferior limit
    maxChar = 57;           // ascii superior limit

    arraySize = maxLen + 1; // + 1 for end of string NULL char
    char str[arraySize];    // initialize pw array

    do {                    // loops through letters of str
        for (j = minChar; j <= maxChar; j++){ // loops through alphabet

            str[i] = j;
            str[i+1]= 0;    // sets last char to NULL
            printf("%s\n", str); // This is where crypt() check will go

        }
        /* With j being equal to maxChar, the following loop
        run through previous columns and checks if they're
        equal maxChar, if yes then reset to minChar,
        and if not then set to next letter.*/
        k = i;
        while (k >= 0) {
            if (k == 0 && str[k]==maxChar){
                i++;
            }
            if (str[k] == maxChar){
                str[k] = minChar;
                k--;

            } else {
                str[k]++;
                break;
            }
        }
    } while(i < maxLen);
}
