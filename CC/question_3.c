#include <stdio.h>
#include <time.h>
#include <string.h>

struct Student {
    char name[50];
    int yearOfBirth;
    char units[5][20];
    int marks[5];
};

int calculateAge(int yearOfBirth) {
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);
    int currentYear = localTime->tm_year + 1900;
    return currentYear - yearOfBirth;
}

float calculateAverageMarks(int marks[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return (float)sum / 5;
}

int main() {
    struct Student student;
    
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    
    printf("Enter year of birth: ");
    scanf("%d", &student.yearOfBirth);
    getchar(); // Consume the newline character from the previous input
    
    printf("Enter unit names and marks for five units:\n");
    for (int i = 0; i < 5; i++) {
        printf("Unit %d Name: ", i + 1);
        fgets(student.units[i], sizeof(student.units[i]), stdin);
        student.units[i][strcspn(student.units[i], "\n")] = '\0'; // Remove the newline character from the unit name
        printf("Unit %d Marks: ", i + 1);
        scanf("%d", &student.marks[i]);
        getchar(); // Consume the newline character from the previous input
    }
    
    int age = calculateAge(student.yearOfBirth);
    float averageMarks = calculateAverageMarks(student.marks);
    
    printf("\n--- Student Details ---\n");
    printf("Name: %s", student.name);
    printf("Age: %d\n", age);
    printf("Unit-wise Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", student.units[i], student.marks[i]);
    }
    printf("Average Marks: %.2f%%\n", averageMarks);
    
    return 0;
}

