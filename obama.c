#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Guest
{
    char name[50];
    char studentNumber[50];
    char courseName[50];
    float amountFees;
    float paidAmountFees;
    int percentageFee;
};

float calculateSchoolFee(struct Guest guest)
{
    return guest.amountFees * guest.percentageFee / 100;
}

float calculateSchoolFees(struct Guest guest)
{
    return guest.paidAmountFees;
}

int main()
{
    struct Guest guest;

    printf("Enter Student Name: ");
    fgets(guest.name, sizeof(guest.name), stdin);
    guest.name[strcspn(guest.name, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter Student Number: ");
    fgets(guest.studentNumber, sizeof(guest.studentNumber), stdin);
    guest.studentNumber[strcspn(guest.studentNumber, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter Course Name: ");
    fgets(guest.courseName, sizeof(guest.courseName), stdin);
    guest.courseName[strcspn(guest.courseName, "\n")] = '\0'; // Remove the trailing newline

    printf("Enter the Total Amount of Fees Paid at MRU: ");
    scanf("%f", &guest.amountFees);

    printf("Enter the Amount of Fees you have Paid at MRU: ");
    scanf("%f", &guest.paidAmountFees);

    printf("Enter Percentage Needed To Enter MRU Fees: ");
    scanf("%d", &guest.percentageFee);

    float totalBill = calculateSchoolFee(guest);

    float totalBills = calculateSchoolFees(guest);

    printf("\n---- OBAMA GATE POLICY ----\n\n\n");
    printf("Student Name: %s\n\n", guest.name);
    printf("Student Number: %s\n\n", guest.studentNumber);
    printf("Course Name: %s\n\n", guest.courseName);
    printf("Total Fees for MRU must Paid: shs%.2f\n\n", guest.amountFees);
    printf("Amount of Fees Paid: shs%.2f\n\n", guest.paidAmountFees);
    printf("Percentage Used: %d\n\n", guest.percentageFee);
    printf("Total Fees Paid By Student: shs%.2f\n\n", totalBills);
    printf("Total Bill Needed: shs%.2f\n\n", totalBill);

    if (totalBills < totalBill)
    {
        printf("YOUR NOT ALLOWED");
    }
    else
    {
        printf("YOUR ALLOWED");
    }

    return 0;
}
