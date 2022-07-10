// A program to compute the value of x, where x = a / (b - c)

#include<stdio.h>

int eva_x(int, int, int);

int main(){
	
	printf("*** A program to compute the value of x,\n");
	printf("    where x = a / (b - c) ***\n\n");
	
	printf("Case 1: a = 250, b = 85, c = 25\n");
	printf("        x = %d\n\n", eva_x(250, 85, 25));
	
	printf("Case 2: a = 300, b = 70, c = 70\n");
	printf("        x = %d\n", eva_x(300, 70, 70));

	return 0;
}

int eva_x(int a, int b, int c){
	
	int x;
	
	x = a / (b - c);
	
	return(x);
}
