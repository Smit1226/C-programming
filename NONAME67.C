#include<stdio.h>
#include<conio.h>
void main()
{

char str1[100], str2[100],i,j;
	clrscr();
	printf("\n Please Enter the First String :  ");
	scanf("%s",&str1);

	printf("\n Please Enter the Second String :  ");
	scanf("%s",&str2);

	for(i=0; str1[i]!='\0';i++);


		for(j=0; str2[j]!='\0'; j++ , i++)
		{
			str1[i]=str2[j];
		 }

		 str1[i]='\0';
		 printf("\n output: %s",str1);



	getch();
}