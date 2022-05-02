
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	printf("enter the now :=");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{

		for(j=1;j<=no;j++)
		{
			if(i==1 || j==1 || i==no || j==no)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
			printf("\n");
	}

	getch();
}