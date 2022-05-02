#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,no;
	clrscr();
	printf("enter the now :=");
	scanf("%d",&no);

	for(i=1;i<no;i++)
	{

		for(j=no;j>=i;j--)
		{
			printf(" *");
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}

		for(j=no;j>=i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}

	for(i=1;i<=no;i++)
	{

		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		for(k=no;k>i;k--)
		{
			printf("  ");
		}
		for(k=no;k>i;k--)
		{
			printf("  ");
		}

		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}





	getch();
}
