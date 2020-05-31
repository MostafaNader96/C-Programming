#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y);

void main()
{

  int x=5,y=10;
  clrscr();
  printf("Before Swapping\nX=%d \nY=%d\n\n",x,y);
  swap(&x,&y);
  printf("After Swapping\nX=%d \nY=%d",x,y);
  getch();
}



void swap(int *x, int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;

}