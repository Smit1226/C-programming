#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,ps;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter the array element [%d] := ", i);
		scanf("%d",&arr[i]);

	}

	     printf(" enter the posstion := ");
	     scanf("%d",&ps);



	for(i=ps;i<5;i++)
	{
		arr[i]=arr[i+1];
	}

	for(i=0;i<4;i++)
	{
		printf("%d\n",arr[i]);
	}
	getch();
}