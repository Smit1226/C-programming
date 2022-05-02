#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	printf("enter the no :=");
	scanf("%d",&no);

	for (i=1;i<=no;i++)
	{

		for (j=no;j>=1;j--)
		{
			printf(" %d",j);
		}

			printf("\n");

	}


	getch();
}