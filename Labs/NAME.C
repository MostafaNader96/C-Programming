#include <stdio.h>
#include <conio.h>

void main()
{
  char fn[7],ln[5];
  clrscr();
  printf("Please enter you first name :) : ");
  gets(fn);
  while(strlen(fn)>7)
  {
   flushall();
   printf("You exceeded the limit of the array plz try again :) :");
   gets(fn);
  }

  printf("please enter your last name :) : ");
  gets(ln);

  while(strlen(ln)>5)
  {
   flushall();
   printf("You exceeded the limit of the array plz try again :)");
   gets(ln);
  }

  printf("First name: %s\nLast name: %s\nPress any key to continue",fn,ln);

  getch();




}