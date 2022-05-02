#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1;
	clrscr();
	printf("enter the no := ");
	scanf("%d",&no);
	while (i<=no)
	{
		 //even number( for odd i%2==1)
		if(i%2==0)
		{
		printf("%d\n",i);
		}
		i++;
	}
	getch();
	}

