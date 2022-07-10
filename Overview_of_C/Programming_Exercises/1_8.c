// A program to print a mailing address with border lines

#include<stdio.h>

int main(){
	
	char name[7] = "Devang", door_no[5] = "B101",
	     street[10] = "StreetXYZ", city[8] = "CityXYZ";
	int pin_code = 123123;
	
	printf("*** Mailing address ***\n\n");
	
	printf("+-----------------+\n");
	printf("| %-15s |\n| %s, %s |\n| %s, %d |\n", name, door_no, street, city, pin_code);
	printf("+-----------------+\n");
	
	return 0;
}
