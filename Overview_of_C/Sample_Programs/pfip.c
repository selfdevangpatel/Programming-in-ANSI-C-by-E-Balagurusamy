// Program for investment problem

#include<stdio.h>

#define PERIOD 10
#define PRINCIPAL 5000.0

int main(){
	
	// Declaration statements
	int year;
	float amount, value, inrate;
	
	// Assignment statements
	amount = PRINCIPAL;
	inrate = 0.11;
	year = 0;

	printf("*** Program for investment problem ***\n\n");
	
	// Computation statements
	// Computation using while loop
	while(year <= PERIOD){
		
		printf("%2d     %8.2f\n", year, amount);
		
		value = amount + inrate * amount;
		year = year + 1;
		amount = value;
	}
	// While loop ends
	
	return 0;
}
// Program ends
