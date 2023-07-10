#include <stdio.h>
#include <string.h>

// Function to print a centered and indented paragraph
void printIndentedCentered(const char* paragraph) {
    int width = 60; // Desired width for the paragraph

    // Calculate the left indentation to center the paragraph
    int indentation = (width - strlen(paragraph)) / 2;

    // Print the indented paragraph
    printf("%*s%s\n", indentation, "", paragraph);
}

int main() {
    printf("_________________________________________________________________\n");
    printf("                     Alvin's Love Letters                      \n");
    printf("_______________________________________________________________\n\n");

    printf("Date: June 5, 2023\n\n");

    printf("From:\n");
    printf("Alvin Ronald\n");
    printf("123 Love Street\n");
    printf("Cityville, State\n");
    printf("Postal Code\n\n");

    printf("To:\n");
    printf("Mrs. Peyton Adams\n");
    printf("456 Romance Avenue\n");
    printf("Lovetown, State\n");
    printf("Postal Code\n\n");

    printf("My Dearest Peyton,\n\n");

    printIndentedCentered("Words cannot adequately express the depth of my love for you, but I hope this letter serves as a testament to the boundless affection I hold in my heart. Every day spent with you is a precious gift, and I cherish the love we share.");
    printIndentedCentered("Your presence in my life has brought me immeasurable joy and has filled my world with happiness and warmth. Your smile brightens even the cloudiest of days, and your laughter is a melody that brings music to my soul.");
    printIndentedCentered("From the moment I met you, I knew there was something extraordinary about you. Your kindness, compassion, and unwavering support have shown me what it means to love and be loved unconditionally.");
    printIndentedCentered("In your arms, I find solace, comfort, and a sense of belonging. With you, I am my truest self, and I am endlessly grateful for your acceptance and understanding.");
    printIndentedCentered("As we continue to walk this journey together, I promise to stand by your side through thick and thin. I vow to support and encourage you, to listen and understand, and to love you fiercely with all that I am.");
    printIndentedCentered("You are my rock, my confidant, and my best friend. I am eternally grateful for the love we share, and I eagerly anticipate the adventures and memories we will create together.");
    printIndentedCentered("Please know that my love for you knows no bounds and that my heart belongs to you now and forever.\n");

    printf("Yours forever and always,\n\n");
    printf("Alvin\n");

    printf("________________________________________________________________\n");
    printf("                With all my love, forever and always.           \n");
    printf("________________________________________________________________\n");

    return 0;
}
