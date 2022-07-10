// A program to print a pattern using a single printf statement

#include<stdio.h>

int main(){
	
	int i, j;
	
	printf("*** Demonstration of printing a pattern using a single printf statement ***\n\n");
	
	for(i = 0; i < 4; i++){
		
		for(j = 0; j <= i; j++){
			
			printf("* ");
		}
		putchar('\n');
	}
	
	return 0;
}
