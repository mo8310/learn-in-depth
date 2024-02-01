#include "stdio.h"

int main()

{
	float x,y;
	printf("Enter value of a:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of b:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&y);

	    x = x + y;
	    y = x - y;
	    x = x - y;

    printf("\n");
	printf("After swapping, value of a = %f",x);
	printf("\n");
	printf("After swapping, value of b = %f",y);

}
