// A program to print a multiplication table

#include<stdio.h>

int main(){
	
	printf("*** Multiplication table of 5 ***\n\n");
	
	for(int i = 1; i < 11; i++)
		printf("5 x %-2d = %d\n", i, 5 * i);
	
	return 0;
}
