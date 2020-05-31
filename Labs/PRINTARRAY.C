#include <stdio.h>
#include <conio.h>
#define N 5

void main()
{
 int arr[N];
  int i,j;
  clrscr();

  for(j=0;j<N;j++)
  {
  printf("Enter element %d in the array",j+1);
  scanf("%d",&arr[j]);

  }
  for(i=0;i<N;i++)
  {
  printf("Element %d=%d\n",i+1,arr[i]);

  }


getch();
}