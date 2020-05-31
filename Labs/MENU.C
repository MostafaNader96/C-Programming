#include <stdio.h>
#include <conio.h>

void fun1(void);
void fun2(void);

int x,y,c=2;
	  char m,k;
char name[20];
char number[12];
char address[50];

void main()
{


  fun1();
  getch();




}

void fun1(void)
{

c=2;
clrscr();

  gotoxy(10,2);
  printf("NAME");
  gotoxy(10,3);
  printf("PHONE");
  gotoxy(10,4);
  printf("ADDRESS");
  gotoxy(10,5);
  printf("EXIT");
  gotoxy(10,2);

  while(1)
  {
  if(k==99) return;
  x=getch();
  if(x==0)
  y=getch();

  if(y==80 && x==0)
  {c++;
  if(c>5) c=2;
  gotoxy(10,c);
  }
 if(y==72 && x==0)
  {c--;
  if(c<2) c=5;
  gotoxy(10,c);
  }
 if(x==13)
  { fun2(); }
}

}


void fun2(void)
{
 if(c==2)
 {
 clrscr();
 printf("Please Enter your name :");
 gets(name);
	 getch();
	  fun1();
  }
  if(c==3)
  {
  clrscr();
  printf("Please Enter your phone number :");
  gets(number);
   getch();
	  fun1();
  }
  if(c==4)
  {
  clrscr();
  printf("Please Enter your address :");
  gets(address);
   getch();
	  fun1();
  }
  if(c==5)
  {
  k=99;
   clrscr();
  printf("EXIT MODE!");
   return;
  }



}

