#include <stdio.h>
 //simple interest
 //si = p*r*t
int main ()
{
    int principle = 0;
    float rate =0;
    int time =0;

    printf("Enter Your Principle:\n");
    scanf("%d", &principle);

     printf("Enter Your rate:\n");
    scanf("%f", &rate);

     printf("Enter Your Time:\n");
    scanf("%d", &time);

    float simple_interest = principle*rate*time;
    printf("Your Simple Interest Is: %f", simple_interest);
    

    return 0;
}
