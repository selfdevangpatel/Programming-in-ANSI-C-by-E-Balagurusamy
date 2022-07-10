// A program to implement a simple arithmethic calculator

#include<stdio.h>

int main(){
	
	float x, y;
	
	printf("*** Simple arithmethic calculator ***\n\n");
	
	printf("Enter the value of X: ");
	scanf("%f", &x);
	
	printf("Enter the value of Y: ");
	scanf("%f", &y);
	
	printf("\nX: %.2f, Y: %.2f\n", x, y);
	printf("Sum: %.2f, Difference: %.2f\n", (x + y), (x - y));
	printf("Product: %.2f, Division: %.2f\n", (x * y), (x / y));
	
	return 0;
}
