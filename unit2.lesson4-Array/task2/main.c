#include <stdio.h>
#include <stdlib.h>

int main()
{
  float arr[100];
  int num;
  float sum=0.0,avg;
  printf("Enter the numbers of data: ");
  scanf("%d",&num);

  for(int i=0;i<num;i++)
  {
      printf("\n%d. Enter number : ",i+1);
      scanf("%f",&arr[i]);
      sum+=arr[i];
  }
  avg=sum/num;
  printf("Average = %.2f",avg);
}
