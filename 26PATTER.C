#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no,k,s=0;
	clrscr();
	printf("enter the no of rows:=");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		s=s+i;
		k=s;
		for(j=1;j<=i;j++)
		{
			printf(" %d",k);
			k--;
		}
		printf("\n");
	}
	getch();
}