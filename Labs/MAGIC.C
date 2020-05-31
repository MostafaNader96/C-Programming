#include <stdio.h>
#include <conio.h>
#define N 3
void main()
{
int dx,dy,i,col,row=0;
	col=N/2;
   //	dx=(80-N)/(N-1);
   //	dy=(25-N)/(N-1);
  clrscr();
  gotoxy(col+1,row+1);
  printf("1");
  for(i=1;i<(N*N);i++)
  {
  if((i)%3==0)
  {
	 row++;
	 if(row>(N-1))
	 row=0;
  }
  else
  {
  row--; if(row<0) row=N-1;
  col--; if(col<0) col=N-1;
  }
  gotoxy(col+1,row+1);
  printf("%d",i+1);
 // c=c+dx;
 // r=r+dy;
	}
	getch();




}
