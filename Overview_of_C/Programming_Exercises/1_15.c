/* A program to compute the area of a circle given two points on circumference
   of the circle which forms the diameter of that circle */

#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(){
	
	int x1 = 2, x2 = 5, y1 = 2, y2 = 6;
	float diam, area;
	
	diam = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	area = PI * (pow(diam, 2) / 4);
	
	printf("*** Area of a circle ***\n\n");
	
	printf("The line joining the points (2, 2) and (5, 6) which lie on the\n");
	printf("circumference of a circle is the diameter of the circle.\n\n");
	
	printf("Area: %.2f\n", area);
	
	return 0;
}
