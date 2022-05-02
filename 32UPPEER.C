#include<stdio.h>
#include<conio.h>
void main()
{
	char name[30];
	int i,j;
	clrscr();
	printf("enter the name :=");
	scanf("%s",&name);

	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
		else
		{
			name[i]=name[i]-32;
		}

		printf("%c",name[i]);
	}




	getch();
}

