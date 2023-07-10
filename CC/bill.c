#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Guest {
    char name[50];
    int roomNumber;
    float roomRate;
    int numDays;
};

float calculateBill(struct Guest guest) {
    return guest.roomRate * guest.numDays;
}

int main() {
    struct Guest guest;

    printf("Enter guest name: ");
    fgets(guest.name, sizeof(guest.name), stdin);
    guest.name[strcspn(guest.name, "\n")] = '\0';  // Remove the trailing newline

    printf("Enter room number: ");
    scanf("%d", &guest.roomNumber);

    printf("Enter room rate per day: ");
    scanf("%f", &guest.roomRate);

    printf("Enter number of days: ");
    scanf("%d", &guest.numDays);

    float totalBill = calculateBill(guest);

    printf("\n---- Billing Details ----\n");
    printf("Guest Name: %s\n", guest.name);
    printf("Room Number: %d\n", guest.roomNumber);
    printf("Room Rate per Day: $%.2f\n", guest.roomRate);
    printf("Number of Days: %d\n", guest.numDays);
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}