#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0;
	clrscr();
	printf("enter the number to be reversed:=");
	scanf("%d",&n);

	while(n!=0)
	{

		r=r*10;
		r=r + n%10;
		n=n/10;
	}


		printf("reverse of entered no is = %d\n ",r);


	getch();
}
