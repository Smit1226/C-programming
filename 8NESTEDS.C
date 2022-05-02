//switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	int ch1,ch2,ch3,c,ccc,java,sum;
	float per;
	clrscr();
	printf("for commerce field enter 1 \n for science field 2 \n enter your choice :=");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			printf("1.bcom \n 2.bba \n 3.bca\n");
			printf("for bca enter 3 \n enter ur choice :=");
			scanf("%d",&ch2);
			switch(ch2)
			       {
				case 3:
				printf("enter c marks :=");
				scanf("%d",&c);
				printf("enter ccc marks :=");
				scanf("%d",&ccc);
				printf("enter java marks :=");
				scanf("%d",&java);
				sum=c+ccc+java;
				per=sum/3;
				printf("sum is = %d\n",sum);
				printf("per is = %f",per);
				break;
				default:
				printf("nothing avilable");
				}
				break;

		case 2:
				printf("1.mechanical\n 2.civil \n 3.computer");
				printf("for computer enter 3 \n enter ur choice :=");
				scanf("%d",&ch3);
				switch(ch3)
			       {
				case 3:
				printf("enter c marks :=");
				scanf("%d",&c);
				printf("enter ccc marks :=");
				scanf("%d",&ccc);
				printf("enter java marks :=");
				scanf("%d",&java);
				sum=c+ccc+java;
				per=sum/3;
				printf("sum is = %d\n",sum);
				printf("per is = %f",per);
				break;
				default:
				printf("nothing avilable");
				}
			break;
		default:
			printf("no options availble");
	}

getch();
}




