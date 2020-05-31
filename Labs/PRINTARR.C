#include <stdio.h>
#include <conio.h>

void printarr(int *ptr,int size);
void scanarr(int *ptr,int size);

void main()
{
int col=1;
int row=1;
int flag=0;
char key,keyy;
int *ptr;
int i=0,j=0,k=0;
int arr[10];
clrscr();
gotoxy(col,row);
while(1)
{
key=getch();
if(key!=0)
{
if(key==27)
exit();
if(key==13)
{
break;
}
else
{
if(i>9)
{
		i=9;
		flag=1;
}

arr[i]=key;
printf("%c",arr[i]);
i++;
k++;
col++; if(col>10) col=10;
}
gotoxy(col,row);
}

if(key==0)
{
keyy=getch();
switch(keyy)
{
case 77:
col++; if(col>10) col=10;
gotoxy(col,row);
i++;    if(i>9) i=9;
k++;    if(k>10) k=10;
break;

case 75:
col--; if(col<1) col=1;
gotoxy(col,row);
i--;  if(i<0) i=0;
k--;  if(k<1) k=1;
break;

case 71: //home
col=1;
gotoxy(col,row);
i=0;
break;

case 79: //end
col=k;
gotoxy(col,row);
break;

}

}


 }
//printarr(arr,10);


printf("\n\n");

if(flag==0)
{
for(j=0;j<i+1;j++)
{
printf("%c\n",arr[j]);
}
}
if(flag==1)
{
 for(j=0;j<10;j++)
{
printf("%c\n",arr[j]);
}
}



getch();
}

void printarr(int *ptr,int size)
{
int j;
for(j=0;j<size;j++)
{
  printf("Element number %d =%d\n",j+1,ptr[j]);
}
}

void scanarr(int *ptr,int size)
{
int i;
for(i=0;i<size;i++)
{
printf("Enter Element %d: ",i+1);
scanf("%d",&ptr[i]);
}
printf("\n\n");
}