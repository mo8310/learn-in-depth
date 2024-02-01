#include "stdio.h"

int main()

{
	char x;
	printf("Enter an alphabet : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&x);

    if(65<=x && x<=90)    //assci code for uppercase letter from 65 to 90
    {

    	printf("%c is a consonant.",x);

    }
    else
    {

    	printf("%c is a vowel.",x);

    }


}
