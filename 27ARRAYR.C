#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,no,no1;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter the array element [%d] := ", i);
		scanf("%d",&arr[i]);



	}

	     printf(" enter the posstion := ");
	     scanf("%d",&no);

	     printf(" enter the new value := ");
	     scanf("%d",&no1);

	for(i=0;i<5;i++)
	{
		if(no==i)
		{
			arr[i]=no1;
		}

	printf("%d\n",arr[i]);
	}




	getch();
}