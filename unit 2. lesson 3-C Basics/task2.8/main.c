#include "stdio.h"
int main() {

    char ch;
    float x,y;
    printf("Enter operator either + or - or * or / : ");
    fflush(stdin);
    fflush(stdout);
    scanf("%c", &ch);
    printf("Enter two operands: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%f%f", &x,&y);

    switch(ch)
	{
    case '+':
    	printf("%f+%f=%f",x,y,x+y);
    	break;
    case '-':
       	printf("%f-%f=%f",x,y,x-y);
       	break;
    case '*':
       	printf("%f*%f=%f",x,y,x*y);
       	break;
    case '/':
       	printf("%f/%f=%f",x,y,x/y);
       	break;
    default:
    	printf("You enter unvalued operator.");
    	break;
	}
}
