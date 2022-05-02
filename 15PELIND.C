#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,no;
	clrscr();
	printf("enter the number to be reversed:=");
	scanf("%d",&n);
	no=n;

	while(n!=0)
	{

		r=r*10;
		r=r + n%10;
		n=n/10;
	}
	if(no==r)
	{
		printf("the no is pelindrome ");
	}
	else
	{
		printf("the no is not pelindrome");
	}
	getch();
       }



