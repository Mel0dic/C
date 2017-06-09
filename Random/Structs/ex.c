#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
};

int main(void){

	struct car mycar;

	mycar.year = 2011;
	strcpy(mycar.plate, "CS50");
	mycar.odometer = 50505;

	printf("%i\n", mycar.year);

}
