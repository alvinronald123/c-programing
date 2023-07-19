#include <stdio.h>

int main ()
{
float one = 0;
printf("Enter The First Float:");
scanf("%f", &one);

float two =0;
printf("Enter The Second Float:");
scanf("%f", &two);

float sum = one + two;
float subtract = one - two;
float divide = one / two;
float multiple = one * two;


printf("Sum: %.2f\n", sum);
printf("subtract: %.2f\n", subtract);
printf("divide: %.2f\n", divide);
printf("multiple: %.2f\n", sum);

return 0;


}