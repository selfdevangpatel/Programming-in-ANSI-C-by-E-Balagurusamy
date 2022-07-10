// Program using a math function

#include<stdio.h>
#include<math.h>

#define PI 3.14159
#define MAX 180

int main(){
	
	int angle;
	float x, y;
	
	angle = 0;
	
	printf("*** Program using a math function ***\n\n");
	
	printf("Angle     Cos(angle)\n\n");
	
	while(angle <= MAX){
		
		x = (PI / MAX) * angle;
		y = cos(x);
		
		printf("%5d %10.4f\n", angle, y);
		
		angle = angle + 10;
	}

	return 0;
}
