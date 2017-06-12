#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//instead of "struct car" we can use
typedef struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
}
car_t;

int main(void){

	//now we are using car_t we can just say car_t rather than "struct car mycar"
	car_t mycar;

	mycar.year = 2011;
	strcpy(mycar.plate, "CS50");
	mycar.odometer = 50505;

	printf("%i\n", mycar.year);

}
