// A program to demonstrate user defined functions

#include<stdio.h>

int add(int, int);
int sub(int, int);

int main(){
	
	int a = 20, b = 10;
	
	printf("*** Demonstration of add() and sub() function ***\n\n");
	
	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	
	return 0;
}

int add(int a, int b){
	
	return(a + b);
}

int sub(int a, int b){
	
	return(a - b);
}
