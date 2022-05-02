#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[30][30],i,j,r,c,sqr[30][30];
	clrscr();
	printf("enter the row:=");
	scanf("%d",&r);

	printf("enter the column:=");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the matrix element:=");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");

	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
		 printf("\n");



	printf("square of matrix is\n");
	for(i=0;i<r;i++)
	{

		for(j=0;j<c;j++)
		{
			sqr[i][j]=arr[i][j]*arr[i][j];

			printf("\t%d",sqr[i][j]);
		}
		printf("\n");
	}
		printf("\n\n************\n\n");

	getch();

}