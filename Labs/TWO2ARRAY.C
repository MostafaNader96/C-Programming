#include <stdio.h>
#include <conio.h>
#include <limits.h>
#define N 3
#define M 3


void main()
{
int arr2d[N][M];
int arr2dt[N][M];

int i,j,c=5,k=40;
unsigned x;
double sum=0;
float summ;
clrscr();
for(i=0;i<N;i++)
{
for(j=0;j<M;j++)
{
printf("Enter Element %d %d in the matrix",i+1,j+1);
scanf("%d",&x);

if(x>INT_MAX-1)
{
flushall();
j--;
printf("repeat\n");
}
else
	{
arr2d[i][j]=x;
arr2dt[j][i]=arr2d[i][j];
	 }
}
}
for(i=0;i<N;i++)
{
sum=0;
gotoxy(40,c);
for(j=0;j<M;j++)
{
sum+=arr2d[i][j];
printf("%d   ",arr2d[i][j]);

}
printf("%lf",sum);
c++;
}

for(i=0;i<N;i++)
{
summ=0;
gotoxy(k,9);
for(j=0;j<M;j++)
{
summ+=arr2dt[i][j];
//printf("%d   ",arr2d[i][j]);

}
printf("%0.1f",(summ/3));
k=k+4;
}


getch();

}





