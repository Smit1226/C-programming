#include<stdio.h>
#include<conio.h>
void main()
{
	int per;
	clrscr();
	printf("enter percentage :=");
	scanf("%d",&per);

	if (per>=90)
	{
	printf("A+ GRADE");
	}
	else
	{
		if(per>=80)
		{
		printf("A GRADE");
		}
		else
		{
			if(per>=70)
			{
			printf("B GRADE");
			}
			else
			{
				if(per>=60)
				{
				printf("C GRADE");
				}
				else
				{
					if(per>=50)
					{
					printf("D GRADE");
					}
					else
					{
						if(per>=35)
						{
						printf("E GRADE");
						}
						else
						{
						printf("you are failed");
						}
					}
				}
			}
		}
	}

getch();
}