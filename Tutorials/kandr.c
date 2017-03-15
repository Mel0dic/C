#include <stdlib.h>
#include <stdio.h>

int main(){

        float fahr, celsius;
        int lowerf, upperf, stepf;

        lowerf = 0;
        upperf = 200;
        stepf = 20;

        fahr = lowerf;

        printf("Fahrenheit\tCelsius\n-----------------------------\n");

        while(fahr <= upperf) {
                celsius = 5 * (fahr-32) / 9;
                printf("%6.0f\t\t%8.2f\n", fahr, celsius);
                fahr += stepf;
        }


        float cels, fahrenheit;
        int lowerc, upperc, stepc;

        lowerc = -20;
        upperc = 100;
        stepc = 10;

        cels = lowerc;

        printf("\n\nCelsius\t\tFahrenheit\n-----------------------------\n");

        while(cels <= upperc) {
                fahrenheit = (9 * cels) / 5 + 32;
                printf("%6.0f\t\t%8.0f\n", cels, fahrenheit);
                cels += stepc;
        }

}
