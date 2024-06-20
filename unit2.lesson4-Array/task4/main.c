#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],num,nset,npl;

    printf("Enter no of elements : ");
    scanf("%d\n",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter the element to be inserted : ");
    scanf("%d",&nset);
    printf("Enter the location : ");
    scanf("%d",&npl);

    for(int i=num;i>=npl;i--)
    {
        arr[i]=arr[i-1];
    }
    num++;
    arr[npl-1] = nset;

    for(int i=0;i<num;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
}
