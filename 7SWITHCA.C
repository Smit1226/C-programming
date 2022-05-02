//switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch,ba,eco,acc,maths,phy,chem,sum;
	float per;
	clrscr();
	printf("for commerce enter 1 \n for science enter 2 \n enter your choice :=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("enter your commerce marks\n");
		printf("enter eco marks :=");
		scanf("%d",&eco);
		printf("enter ba marks :=");
		scanf("%d",&ba);
		printf("enter acc marks :=");
		scanf("%d",&acc);
		sum=eco+acc+ba;
		per=sum/3;
		printf("sum is = %d\n",sum);
		printf("per is = %f",per);
		break;

		case 2 :
		printf("enter your science marks\n");
		printf("enter maths marks :=");
		scanf("%d",&maths);
		printf("enter phy marks :=");
		scanf("%d",&phy);
		printf("enter chem marks :=");
		scanf("%d",&chem);
		sum=maths+phy+chem;
		per=sum/3;
		printf("sum is = %d\n",sum);
		printf("per is = %f",per);
		break;

		default:
			printf("wrong choice");

	}
	getch();
}

