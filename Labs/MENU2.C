#include <stdio.h>
#include <conio.h>
#define up 72
#define down 80
#define enter 13
#define esc   27

struct employee
{
char name[50];
char id[20];
char address[100];
};



void main()
{
  char key;
  int col=20,row=3;
  struct employee emp[5];
  int countn=0,counti=0,counta=0;
  char name1[50],id1[20],address1[100];
  int i,j,pos=0;
  char menu[5][10]={"NAME","ID","ADDRESS","DISPLAY","EXIT"}
  ;
  clrscr();

  while(1)
  {    //start while(1)
  clrscr();
   textcolor(CYAN);
  gotoxy(col,row);
  printf("%c%c",45,62);
  textcolor(CYAN);
 cprintf("NAME");


  gotoxy(col,row+1);
   textcolor(RED);
 cprintf("%c%c",45,62);
  cprintf("ID");

  gotoxy(col,row+2);
  textcolor(GREEN);
  cprintf("%c%c",45,62);
  cprintf("ADDRESS");

  gotoxy(col,row+3);
  textcolor(BLUE);
  cprintf("%c%c",45,62);
  cprintf("DISPLAY");

  gotoxy(col,row+4);
  textcolor(WHITE);
  cprintf("%c%c",45,62);
  cprintf("EXIT");

  row=3;
  for(i=0;i<5;i++)
  {
  if(i==pos)
  {
  gotoxy(col,row+i);
  textattr(0x70);
  cprintf("%c%c",45,62);
  cprintf("%s",menu[i]);
  textattr(0x07);
  }
  }
  flushall();
  key=getch();
  switch(key)
  {            //start of switch on first key
  case NULL:
  key=getch();
  switch(key)
  {			   //start of swicth on 2nd key
  case up:
  pos--;
  if(pos<0) pos=4;
  break;
  case down:
  pos++;
  if(pos>4) pos=0;
  break;
  }           //end of switch on 2nd key
  break;

  case enter:
  switch(pos)
  {
  case 0:
  clrscr();
  if(countn<5)
  {
  printf("Please enter employee's number %d name: ",countn+1);
  strcpy(emp[countn].name,gets(name1));
  countn++;
  }
  else
  {printf("MEMORY FULL!!");
  getch();}
  break;
  case 1:
  clrscr();
  if(counti<5)
  {
  printf("Please enter employee's number %d ID: ",counti+1);
  strcpy(emp[counti].id,gets(id1));
  counti++;
  }
  else
  {printf("MEMORY FULL!!");
  getch();}
  break;
  case 2:
  clrscr();
  if(counta<5)
  {
  printf("Please enter employee's number %d address: ",counta+1);
  strcpy(emp[counta].address,gets(address1));
  counta++;
  }
  else
  {printf("MEMORY FULL!!");
  getch();}
  break;
  case 3:
  clrscr();
  gotoxy(5,5);
  printf("Name          ID          Address\n");
  for(j=0;j<5;j++)
  {
  gotoxy(5,6+j);
  printf("%s",emp[j].name);
  gotoxy(19,6+j);
  printf("%s",emp[j].id);
  gotoxy(31,6+j);
  printf("%s",emp[j].address);
  }
  getch();
  break;
  case 4:
  clrscr();
  printf("Exit mode! Press any key to terminate ");
  getch();
  exit();
  break;
  }
  break;

  case esc:
  exit();
  break;

  }           //end of switch on first key


  }	//end of while(1)









}//END OF MAIN