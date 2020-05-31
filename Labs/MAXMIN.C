#include <stdio.h>
#include <conio.h>
#define N 5

void main()
{
  int arr[N];
  int i,j,max=-9999,min=9999,sum=0;

  clrscr();

  for(j=0;j<N;j++)
  {
  printf("Enter element %d in the array",j+1);
  scanf("%d",&arr[j]);

  }



  for(i=0;i<N;i++)
  {
   if(arr[i]>max)
   max=arr[i];
   if(arr[i]<min)
   min=arr[i];
   sum=sum+arr[i];

  }

  printf("max=%d\nmin=%d\nsum=%d\n",max,min,sum);


  getch();




}