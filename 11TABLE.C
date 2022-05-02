#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1;
	clrscr();
	printf("enter the no :=");
	scanf("%d",&no);

	while(i<=10)
	{
	printf("%d  *   %d   =  %d\n",no,i,no*i);
	i++;
	}
	getch();
	}