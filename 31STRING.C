#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{  	char str[30],str2[30];

	clrscr();
	printf("enter the string1 := ");
	scanf("%s",&str);

	printf("enter the string2 := ");
	scanf("%s",&str2);

	printf("your string length is := %d\n",strlen(str));

	//printf("your string reverse is := %s\n",strrev(str));

	//printf("your string UPPERCASE  is := %s\n",strupr(str));

	//printf("your string lowercase is := %s\n",strlwr(str));

       //printf("your string concatenate is := %s\n",strcat(str,str2));

	printf("your string compare is := %d",strcmp(str,str2));

	getch();

}