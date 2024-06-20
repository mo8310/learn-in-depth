#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],num,nsear;

    printf("Enter no of elements : ");
    scanf("%d\n",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter the element to be searched : ");
    scanf("%d",&nsear);

    for(int i=0;i<num;i++)
    {
        if(nsear==arr[i])
        {

         printf("Number found at the location = %d",i+1);
         break;
        }
        else if(nsear!=arr[i]&&i==num-1)
        {
            printf("Not found");
        }
    }

}
