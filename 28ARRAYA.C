#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[50],i,ps,value;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter the array element [%d] := ", i);
		scanf("%d",&arr[i]);



	}

	     printf(" enter the posstion := ");
	     scanf("%d",&ps);

	     printf(" enter the new value := ");
	     scanf("%d",&value);

	for(i=4;i>=ps;i--)
	{
		arr[i+1]=arr[i];

	}
		arr[ps]=value;

	for(i=0;i<6;i++)
	{
		printf("%d\n",arr[i]);
	}




	getch();
}