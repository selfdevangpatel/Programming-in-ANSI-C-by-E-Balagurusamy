// A program to convert temperature units(Celsuis and Fahrenheit)

#include<stdio.h>

int main(){
	
	float f, c;
	
	printf("*** Convert temperature units(Celsuis and Fahrenheit) ***\n\n");
	
	printf("Enter Degree Celsuis: ");
	scanf("%f", &c);
	
	f = ((9 * c) / 5) + 32;
	
	printf("%.2f Degree Celsuis is %.2f Degree Fahrenheit.\n\n", c, f);
	printf("Enter Degree Fahrenheit: ");
	scanf("%f", &f);
	
	c = (5 * (f - 32)) / 9;
	
	printf("%.2f Degree Fahrenheit is %.2f Degree Celsuis.\n", f, c);
	
	return 0;
}
