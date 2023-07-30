#include <stdio.h>

int main ()
{
	int num[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	int x;
	printf("__________________________________  \n");
	printf("The Calenda OF January \n");
	printf("----------------------------\n");
	printf("MON TUE WED THUR FRI SAT SUN \n");
	printf("%27d \n", num[0]);
	for (x=1; x<30; x++){
		printf("%2d ",num[x]);
		
		if(x==7){
			printf("\n");
		}
			if(x==14){
			printf("\n");
		}
			if(x==21){
			printf("\n");
		}
			if(x==28){
			printf("\n");
		}
			if(x==35){
			printf("\n");
		}
		
	}
	
}
