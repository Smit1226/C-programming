#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=2,f=0;
	clrscr();
	printf("enter the number:=");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%i==0)
		{
			f=1;
			break;
		}
		i++;
	}
	if(f==0)
	{
		printf("no is prime");
	}
	else
	{
		printf("no is not prime");
	}
	getch();
}

