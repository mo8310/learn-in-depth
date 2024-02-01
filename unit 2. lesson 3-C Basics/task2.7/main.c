#include "stdio.h"

int main() {
    int x;
    int fac=1;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &x);

   if(x>0)
   {
    for(int i=1;i<=x;i++)
    {

    	fac=fac*i;
    }
    printf("Factorial=%d",fac);
   }
   else
   {
	   printf("Error!! Factorial of negative number doesn't exist.");
   }

}
