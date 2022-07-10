// A program to compute the area of a triangle given the values of three sides

#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c, s, area;
	
	printf("*** Area of triangle ***\n\n");
	
	printf("Enter the value of side A: ");
	scanf("%f", &a);
	
	printf("Enter the value of side B: ");
	scanf("%f", &b);
	
	printf("Enter the value of side C: ");
	scanf("%f", &c);
	
	s = (a + b + c) / 2;
	
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	
	printf("\nThe area of triangle is %.2f\n", area);
	
	return 0;
}
