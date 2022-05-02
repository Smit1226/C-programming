//udf
//argument and no return value

#include<stdio.h>
#include<conio.h>
void abc(int x);
void multi(int x,int y);

void main()
{
	int no,no1,no2;
	clrscr();
	printf("enter the no:=");
	scanf("%d",&no);
	abc(no);

	printf("enter the no1:=");
	scanf("%d",&no1);
	printf("enter the no2:=");
	scanf("%d",&no2);
	multi(no1,no2);

	getch();
}
void abc(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
		printf("facto is:=%d\n",f);
	}
}
void multi(int x,int y)
{
	int c;
	c=x*y;
	printf("multi is:=%d",c);
}
