#include "stdio.h"
int main()

{
	float  x,y,z;
	printf("Enter three numbers : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);

    if(x>y && x>z)
    {

    	printf("Largest number = %f",x);

    }
    else if(y>x && y>z)
    {

    	printf("Largest number = %f",y);

    }
    else
    {
    	printf("Largest number = %f",z);
    }
}
