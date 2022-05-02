
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,no;
	clrscr();
	printf("enter the no :=");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{

		for(j=1;j<=no;j++)
		{
			if(i==1 || j==1 || i==no)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}

		}
			printf("  ");

		for(j=1;j<=no;j++)
		{
			if(j==1 || i==j )
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}

		for(j=no;j>=1;j--)
		{
			if(i==j || j==1 )
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
			printf("  ");
		for(j=1;j<=no;j++)
		{
			if(i==1 || j==3)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}

		}
			printf("  ");
		for(j=1;j<=no;j++)
		{
			if(i==1 || j==3)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}

		}

			printf("\n");
	}


	for(i=1;i<=no;i++)
	{

		for(j=1;j<=no;j++)
		{
			if(i==no || j==no)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}

		}
			printf("  ");

		for(j=1;j<=no;j++)
		{
			if(j==1  )
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		for(j=1;j<=no;j++)
		{
			if(j==no)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
			 printf("  ");

		for(j=1;j<=no;j++)
		{
			if(j==3 || i==no)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
			printf("  ");

		for(j=1;j<=no;j++)
		{
			if(j==3)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
       }


	getch();
}