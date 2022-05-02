#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i=1,sum=0,mul=1;
	clrscr();
	printf("enter the no:=");
	scanf("%d",&no);

	while(i<=no)
	{
		printf("ans is :=%d\n",i);
		sum=sum+i;
		mul=mul*i;
		i++;
	}

	printf("sum is :=%d\n",sum);
	printf("product is :=%d",mul);

	getch();
}