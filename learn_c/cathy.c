#include <stdio.h>
//%d
//%s
//%c
//%f
int main ()
{
	char fName[50];
	int age;
	printf("Enter your name :");
	scanf("%s", &fName);
	
	printf("Enter Your Age :");
	scanf("%d", &age);
	
	printf("\n----------------MY NAME --------- \n");
	
	printf("My Name Is  %s", fName);
	printf("My Age Is : %d", age);
	
	return 0;
}
