#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no,k;
	clrscr();
	printf("enter the no of rows:=");
	scanf("%d",&no);


	for(i=no;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf("  ");
		}
		for(j=no;j>i;j--)
		{

			printf(" %d",j);
		}
		for(j=i;j<=no;j++)
		{

			printf(" %d",j);
		}

		printf("\n");
	}
	getch();
}