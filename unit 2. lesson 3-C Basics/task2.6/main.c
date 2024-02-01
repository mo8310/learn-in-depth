#include "stdio.h"

int main() {
    int x;
    int sum=0;
    printf("Enter an integer: ");
    fflush(stdin);
    fflush(stdout);
    scanf(" %d", &x);


    for(int i=0;i<=x;i++)
    {
    	sum=sum+i;
    }

    printf("sum =%d",sum);

}
