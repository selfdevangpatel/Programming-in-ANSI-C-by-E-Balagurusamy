// A program to compute the area of a circle

#include<stdio.h>

#define PI 3.14159

int main(){
	
	float r, area;
	
	printf("*** Compute area of circle ***\n\n");
	
	printf("Enter the radius of a circle: ");
	scanf("%f", &r);
	
	area = PI * r * r;
	
	printf("\nArea of circle is: %.2f\n", area);
	
	return 0;
}
