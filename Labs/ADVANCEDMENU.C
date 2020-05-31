#include <stdio.h>
#include <conio.h>
#include <ALLOC.h>
#define up 72
#define down 80
#define enter 13
#define esc   27


 int countn=0,counti=0,counta=0;
 char name1[50],address1[100];
 int cc=0,N,M,j,q,t,flag=0,flagg=0;

typedef struct
{
char name[50];
int id;
char address[100];
}employee;

 // struct employee emp[5];
	  employee *emp;


void newfunn(void);
void dispfunn(void);
void assign(int *N);
void menuu(void);

void main()
{

  char key;
  int col=20,row=3;

  int i,k,r,pos=0;
  int search,check=0;
  char menu[5][10]={"NEW","Search ID","DISPLAY","BACK","EXIT"}
  ;
  clrscr();


  printf("Enter the number of Employees: ");
  scanf("%d",&N);
  assign(&N);


  menuu();





  while(1)
  {					//start while(1)
  clrscr();
  textcolor(CYAN);
  gotoxy(col,row);
  printf("%c%c",45,62);
  textcolor(CYAN);
  cprintf("NEW");

  gotoxy(col,row+1);
  textcolor(BLUE);
  cprintf("%c%c",45,62);
  cprintf("Search ID");

  gotoxy(col,row+2);
  textcolor(RED);
  cprintf("%c%c",45,62);
  cprintf("DISPLAY");

  gotoxy(col,row+3);
  textcolor(WHITE);
  cprintf("%c%c",45,62);
  cprintf("BACK");

  gotoxy(col,row+4);
  textcolor(GREEN);
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
  newfunn();
  cc++;
  break;

  case 1:
  clrscr();
  printf("Please Enter The Employee's ID That You Want To Search For: ");
  scanf("%d",&search);
  for(k=0;k<N;k++)
  {
   if(search==(emp[k].id))
   {
	printf("\nEmployee's name: %s \nEmployee's ID: %d \nEmployee's Address: %s\n",emp[k].name,emp[k].id,emp[k].address);
   check=1;
   }
  }
  if(check==0)
  printf("Sorry you entered an invalid ID\n");
  printf("Press any key to return to the main menu :)");

  getch();
  break;

  case 2:
  dispfunn();
  break;

  case 3:
  menuu();
  /*clrscr();
  printf("Enter the ID of the user u want to edit: ");
  scanf("%d",&t);
  flagg=0;
  for(r=0;r<5;r++)
  {
   if(t==emp[r].id)
   {
   printf("\n\nEnter the employee's new name: ");
   scanf("%s",name1);
   strcpy(emp[r].name,name1);

   printf("\nEnter the employee's new address: ");
	scanf("%s",address1);
   strcpy(emp[r].address,address1);
	 flagg=1;

   }

  }
  if(flagg==0)
  printf("\n\n You entered a non existing ID!");
  getch();*/
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

void newfunn(void)
{
  int k;
  clrscr();
  printf("Please enter employee number %d name: ",(M));
  scanf("%s",name1);
  strcpy(emp[(M-1)].name,name1);
  countn++;

  printf("Please enter employee number %d address: ",(M));
  scanf("%s",address1);
  strcpy(emp[(M-1)].address,address1);


  printf("Please enter employee number %d ID: ",(M));
  scanf("%d",&(emp[(M-1)].id));

  for(k=0;k<(N);k++)
  {
   if(k!=(M-1))
   {
   while((emp[k].id)==(emp[M-1].id))
   {
   printf("ID already Exists!! Please try again: ");
		   scanf("%d",&(emp[(M-1)].id));
   }
   }
  }


}

void dispfunn(void)
{
 clrscr();
  gotoxy(5,5);
  printf("Name          ID          Address\n");
  for(j=0;j<N;j++)
  {
  gotoxy(5,6+j);
  printf("%s",emp[j].name);
  gotoxy(19,6+j);
  printf("%d",emp[j].id);
  gotoxy(31,6+j);
  printf("%s",emp[j].address);
  }
  getch();

}

void assign(int *X)
{
  emp= (employee*)malloc((*X)*sizeof(employee));
}

void menuu(void)
{
  clrscr();
  printf("Enter the number of the employee that u want to access: ");
  scanf("%d",&M);
  cc++;
  if(M>N)
  {
  printf("Limit exceeded press any value to return!!");
  getch();
  menuu();

   }

}
