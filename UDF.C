//user define function
//there are 4 types of udf
//1. no argument and no return value
//2. argument and no return value

#include<stdio.h>
#include<conio.h>
void prime();


void main()
{
	clrscr();
	prime();
	getch();
}

void prime()
{
	int no,i=2,f=0;
	printf("enter the no :=");
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
		printf("no is not a prime");
		}
}
