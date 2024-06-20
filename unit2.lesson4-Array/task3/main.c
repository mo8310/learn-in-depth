#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[10][10],arrtr[10][10];
   int nrow,ncol,i;
   printf("Enter rows and column of matrix: ");
   scanf("%d\n%d",&nrow,&ncol);
   printf("Enter elements of matrix:\n");

   for(int i=0;i<nrow;i++)
   {
       for(int j=0;j<ncol;j++)
       {
         printf("Enter elements a%d%d: ",i+1,j+1);
         scanf("%d",&arr[i][j]);
       }
   }
   printf("Entered Matrix:\n");
   for(int i=0;i<nrow;i++)
   {
       for(int j=0;j<ncol;j++)
       {
           printf("%d ",arr[i][j]);
              if(j==nrow)
                printf("\n");
       }
   }
   for(int i=0;i<nrow;i++)
   {
       for(int j=0;j<ncol;j++)
       {
           arrtr[j][i]=arr[i][j];
       }
   }
   printf("Transpose of Matrix:\n");

   for(int i=0;i<ncol;i++)
   {
       for(int j=0;j<nrow;j++)
       {
           printf("%d ",arrtr[i][j]);
              if(j==nrow-1)
                printf("\n\n");
       }
   }
}
