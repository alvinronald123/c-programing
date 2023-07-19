#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Main
{
	char fName[50];
	char lName[50];
	char studentName[50];
	char studentSubject[50];
	int studentNumber;
	int studentAge;
	float studentMarks;
};

int main()
{
	struct Main main;
	
	 printf("\n----------------------GRAE SYSTEM----------\n");
     printf("Enter Your First Name : ");
    fgets(main.fName, sizeof(main.fName), stdin);
    main.fName[strcspn(main.fName, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter Your Last Name : ");
    fgets(main.lName, sizeof(main.lName), stdin);
    main.lName[strcspn(main.lName, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter Your Student Name : ");
    fgets(main.studentName, sizeof(main.studentName), stdin);
    main.studentName[strcspn(main.studentName, "\n")] = '\0'; // Remove the trailing newline
    
    printf("Enter Your Subject Name : ");
    fgets(main.studentSubject, sizeof(main.studentSubject), stdin);
    main.studentSubject[strcspn(main.studentSubject, "\n")] = '\0'; // Remove the trailing newline
	
    printf(" Enter Your Student Number :");
    scanf("%d", &main.studentNumber);

    printf("Enter Your Age :");
    scanf("%d", &main.studentAge);

    printf("Enter Your Marks For PHP :");
    scanf("%f", &main.studentMarks);

    printf("\n----------------------GRAE SYSTEM----------\n");
    printf("\n");
    printf("First Name : %s \n", main.fName);
    printf("Last Name : %s \n", main.lName);
    printf("Student Name : %s \n", main.studentName);
    printf("Subject Name : %s \n", main.studentSubject);
    printf("Student Number : %d\n\n", main.studentNumber);
    printf("Your Age : %d\n\n", main.studentAge);
    printf("Your Marks %f \n\n", main.studentMarks);

    if (main.studentMarks>=90)
    {
       printf("Yo Have a D1 in this Subject");
    }
    else if (main.studentMarks>=80 && main.studentMarks<=89)
    {
      printf("You Have aP D2 in this Subject");
    }

	
	return 0;
}
