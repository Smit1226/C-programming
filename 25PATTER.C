#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no,k;
	clrscr();
	printf("enter the no of rows:=");
	scanf("%d",&no);


	for(i=1;i<=no;i++)
	{
		for(k=no;k>=i;k--)
		{
			printf("  ");
		}
		for(j=1;j<i;j++)
		{

			printf(" %d",j);
		}


		for(j=i;j>=1;j--)
		{

			printf(" %d",j);
		}





		printf("\n");
	}
	getch();
}