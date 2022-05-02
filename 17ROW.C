#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no,k=1;
	clrscr();
	printf("enter the no of rows:=");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}