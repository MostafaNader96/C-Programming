#include <stdio.h>
#include <conio.h>

void main()
{
 int x,sum=0;
  clrscr();
  printf("Enter numbers till the numbers exceed 100!");
  while(sum<100)
  {
  scanf("%d",&x);
  sum=sum+x;
  printf("sum=%d\n",sum);

  }
  printf("The number exceeded 100!\n");
  getch();





}