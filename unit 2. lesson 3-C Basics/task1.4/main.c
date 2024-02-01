#include "stdio.h"

int main()

{
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Product:%f",x*y);


}
