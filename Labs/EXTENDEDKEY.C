#include <stdio.h>
#include <conio.h>

void main()
{

  char x,y;
  clrscr();
  while(1)
  {
  x=getch();
  if(x==0)
 {
 y=getch();
 printf("Extended Key with ASCII %d\n",y);
 }
 else if(x==27)
	 break;

   }







}