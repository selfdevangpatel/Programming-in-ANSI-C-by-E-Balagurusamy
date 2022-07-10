/* A program to compute the area and perimeter of a circle given the coordinates
   of the center point(0, 0) and a point on the circumference(4, 5) */

#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(){
	
	int x1 = 0, y1 = 0, x2 = 4, y2 = 5;
	float rad, perim, area;
	
	rad = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	perim = 2 * PI * rad;
	area = PI * pow(rad, 2);
	
	printf("*** Area and perimeter of a circle ***\n\n");
	
	printf("Coordinate of the center point of a circle is (0, 0) and\n");
	printf("a point on the circumference of a circle is (4, 5).\n\n");
	printf("Area: %.2f, Perimeter: %.2f\n", area, perim);
	
	return 0;
}
