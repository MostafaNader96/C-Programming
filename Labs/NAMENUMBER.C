#include <stdio.h>
#include <conio.h>

void main()
{
  char **pptr;

  int M,N,i;
  pptr=(char **)malloc(2*sizeof(char*));
  clrscr();
  printf("Enter size of the name: ");
  scanf("%d",&M);
  printf("Enter size of the number: ");
  scanf("%d",&N);

  pptr[0]=(char*)malloc(M*sizeof(char*));
  pptr[1]=(char*)malloc(N*sizeof(char*));

  printf("Enter the name: ");
  scanf("%s",pptr[0]) ;
  printf("Enter the number: ");
  scanf("%s",pptr[1]);

  printf("\n\nName: ");
  for(i=0;i<M;i++)
  {
  printf("%c",pptr[0][i]);
  }

  printf("\n\nNumber: ");
  for(i=0;i<N;i++)
  {
  printf("%c",pptr[1][i]);
  }
 // printf("\n\n name is %s",pptr[0]);
 // printf("\n\n number is %s",pptr[1]);

  getch();




}