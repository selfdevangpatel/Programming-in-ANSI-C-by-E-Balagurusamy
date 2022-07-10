// A program using a user-defined function

#include<stdio.h>

int mul(int a, int b); // Declaration

// Main program begins
int main(){
	
	int a, b, c;
	
	a = 5;
	b = 10;
	c = mul(a, b);
	
	printf("*** A program using a user-defined function ***\n\n");
	
	printf("Multiplication of %d and %d is %d\n", a, b, c);
	
	return 0;
}
// Main program ends

// mul() function starts
int mul(int x, int y){
	
	int p;
	
	p = x * y;
	
	return(p);
}
// mul() function ends
