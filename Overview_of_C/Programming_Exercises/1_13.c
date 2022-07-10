// A program to compute the distance between two points

#include<stdio.h>
#include<math.h>

int main(){
	
	int x1, x2, y1, y2;
	float dist;
	
	printf("*** Distance between two points ***\n\n");
	
	printf("Enter the coordinates\n");
	printf("X1: ");
	scanf("%d", &x1);
	
	printf("Y1: ");
	scanf("%d", &y1);
	
	printf("X2: ");
	scanf("%d", &x2);
	
	printf("Y2: ");
	scanf("%d", &y2);
	
	dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("\nDistance: %.2f\n", dist);
	
	return 0;
}
