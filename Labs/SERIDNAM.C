#include <stdio.h>
#include <conio.h>

struct employee
{
 int id;
 char name[20];
 char address[20];
};



void main()
{ char namee[20];
  int x,idser,flag=0;
  struct employee emp[5];
  int i,sel;
  clrscr();

  for(i=0;i<5;i++)
  {
  printf("Enter employee number %d name: ",i+1);
  scanf("%s",emp[i].name);
  printf("Enter employee number %d id: ",i+1);
  scanf("%d",&emp[i].id);
  printf("Enter employee number %d address: ",i+1);
  scanf("%s",emp[i].address);
  }

  printf("\npress 1 to search with id\npress 2 to search with name:  ");
  scanf("%d",&sel);
  if(sel==1)
  {
  printf("Enter the ID: ");
  scanf("%d",&idser);
  for(i=0;i<5;i++)
  {
   if(idser==emp[i].id)
   {
   printf("\nNAME: %s\nID: %d\nADDRESS: %s\n",emp[i].name,emp[i].id,emp[i].address);
   flag=1;
   }

  }
  }
  if(sel==2)
  {
  printf("Enter the Name: ");
  scanf("%s",namee);
  for(i=0;i<5;i++)
  {
  x=strcmp(namee,emp[i].name);
  if(x==0)
  {
   printf("\nNAME: %s\nID: %d\nADDRESS: %s\n",emp[i].name,emp[i].id,emp[i].address);
  flag=1;
  }
  }
  }

  if(flag==0)
  {
  printf("\nnot found!");
  }
  getch();




}