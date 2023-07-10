#include <stdio.h>

float calculateInterest(float loanAmount, float interestRate) {
    return loanAmount * interestRate / 100;
}

float calculateTotalReturn(float loanAmount, float interest) {
    return loanAmount + interest;
}

int main() {
    float loanAmount;
    char memberType;
    float interestRate;
    
    printf("Enter loan amount: ");
    scanf("%f", &loanAmount);
    
    printf("Are you a member of the Sacco (Y/N)? ");
    scanf(" %c", &memberType);
    
    if (memberType == 'Y' || memberType == 'y') {
        interestRate = 5.0;
    } else {
        interestRate = 8.0;
    }
    
    float interest = calculateInterest(loanAmount, interestRate);
    float totalReturn = calculateTotalReturn(loanAmount, interest);
    
    printf("\n--- Loan Details ---\n");
    printf("Loan Amount: %.2f\n", loanAmount);
    printf("Interest Rate: %.2f%%\n", interestRate);
    printf("Interest: %.2f\n", interest);
    printf("Total Return: %.2f\n", totalReturn);
    
    return 0;
}

