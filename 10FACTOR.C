#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1,mul=1;
	clrscr();
	printf("enter the no :=");
	scanf("%d",&no);

	while(i<=no)
	{
	mul=mul*i;
	printf("factorial is := %d\n",mul);
	i++;
	}
	getch();
	}