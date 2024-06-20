#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],ch;
    int count=0;
    printf("Enter your string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of string: %d",count);
}
