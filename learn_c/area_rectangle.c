#include <stdio.h>
 
int main ()
{
int length ;
int width ;

printf("Enter Your Length:\n");
scanf("%d", &length);
printf("Enter Your Width:\n");
scanf("%d", &width);
int area=length*width;

printf(" Your Area Is %d", area);
    return 0;
}
