#include <stdio.h>

int main() {
    // Arrays to store the data
    char firstNames[10][20] = {
        "John", "Emily", "Michael", "Sophia", "Robert",
        "Emma", "Daniel", "Olivia", "William", "Ava", 
    };
    
    char lastNames[10][20] = {
        "Smith", "Johnson", "Williams", "Jones", "Brown",
        "Davis", "Miller", "Wilson", "Moore", "Taylor"
    };
    
    char telephoneNumbers[10][15] = {
        "123-456-7890", "234-567-8901", "345-678-9012", "456-789-0123", "567-890-1234",
        "678-901-2345", "789-012-3456", "890-123-4567", "901-234-5678", "012-345-6789"
    };
    
    // Print column headers
    printf("%-20s %-20s %-15s\n", "First Name", "Last Name", "Telephone Number");
    printf("--------------------------------------------------------------\n");
    
    // Print rows of data
    for (int i = 0; i < 10; i++) {
        printf("%-20s %-20s %-15s\n", firstNames[i], lastNames[i], telephoneNumbers[i]);
    }
    
    return 0;
}
