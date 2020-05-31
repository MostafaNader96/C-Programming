#include <stdio.h>
#include <conio.h>


int countn=0;
  int countp=0;
  int counta=0;


typedef struct employee
{
  char name[100];
 char  phone[100];
 char  address[100];
};



void main()
{
  char key;
 struct employee arr[5];
  int i,j,pos=0,col=10,row=4;
  int k;

  char name1[100],phone1[100],address1[100];
  char menu[4][10]={"NAME","PHONE","ADDRESS","EXIT"};
  clrscr();

  while(1)
  {
  clrscr();
   gotoxy(col,4);
  printf("NAME");
  gotoxy(col,5);
  printf("PHONE");
  gotoxy(col,6);
  printf("ADDRESS");
  gotoxy(col,7);
  printf("EXIT");
  for(i=0;i<4;i++)
	{
  gotoxy(col,row+i);
  if(i==pos)
	{
  textattr(0x70);
  cprintf("%s",menu[i]);
  textattr(0x07);
	 }
	 }
  flushall();
  key=getch();

  switch(key)
	 {
  case NULL:
  key=getch();
  switch(key)
		 {
  case 72:
  pos--;
  if(pos<0) pos=3;
  break;
  case 80:
  pos++;
  if(pos>3) pos=0;
  break;
		 }
  break;

  case 13:
  switch(pos)
			 {
  case 0:
  clrscr();
  if(countn<6)
  {
  printf("Please enter Your name: ");

 strcpy(arr[countn].name,gets(name1));
  countn++;
   }
   else
   {
   k=10;
   printf("u already entered 5 names :/");
   }
  break;
  case 1:
  clrscr();
  if(countp<6)
  {

  printf("please enter your phone number: ");
   strcpy(arr[countp].phone,gets(phone1));
  countp++;
   }
   else
   {
   k=10;
   printf("u already entered 5 phone numbers :/");
   }

  break;
  case 2:
  clrscr();
  if(counta<6)
  {
  printf("please enter your address: ");

   strcpy(arr[counta].address,gets(address1));
  counta++;}
  else
  {
  k=10;
   printf("u already entered 5 addresses :(");
   getch();
  }

  break;
  case 3:
  clrscr();
  printf("Exit Mode! press any key to exit\n");
  for(j=0;j<5;j++)
  {
 // if(countn>5 || countp>5 || counta>5)
	 if(k==10)
	 {
  printf("You entered more than 5 employees");
  getch();
  exit();
	  }
  else
  {
  printf("Name of employee %d is %s\n",j+1,arr[j].name);
  printf("number of employee %d is %s\n",j+1,arr[j].phone);
  printf("address of employee %d is %s\n",j+1,arr[j].address);
  }
  }
  getch();
  exit();
  break;
			 }

  }





	   }



  }


