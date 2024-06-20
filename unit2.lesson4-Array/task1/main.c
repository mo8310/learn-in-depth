#include <stdio.h>
#include <stdlib.h>

int main() {

    float arr1[2][2],arr2[2][2],arr3[2][2];
    float i,j;
    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&arr1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            scanf("%f",&arr2[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=arr2[i][j]+arr1[i][j];
        }
    }
    printf("\nSum of Matrix :\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%.1f\t",arr3[i][j]);
            if(j==1)
                printf("\n");
        }
    }
}
