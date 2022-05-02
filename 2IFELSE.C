#include<stdio.h>
#include<conio.h>
void main()
{
	int hindi,eng,gujrati,sum;
	float per;
	clrscr();
	printf("enter hindi marks :=");
	scanf("%d",&hindi);
	printf("enter eng marks :=");
	scanf("%d",&eng);
	printf("enter gujrati marks :=");
	scanf("%d",&gujrati);

	sum=hindi+eng+gujrati;
	per= sum/3;
	printf("sum is := %d\n",sum);
	printf("per is := %f\n",per);

	if(per>=35)
	{
	printf("you are passed");
	}
	else
	{
	printf("you are failed");
	}

	getch();

	}

