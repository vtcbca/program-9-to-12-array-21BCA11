#include<stdio.h>
#include<conio.h>
 void main()
{
	char s[10];
	int len=0,i;
	clrscr();
	printf("\n\tEnter Any String: ");
	gets(s);
	printf("\n\t----------------------");
	for(i=0;s[i]!='\0';i++)
	len++;
	printf("\n\t Inputed String iis %s",s);
	printf("\n\t Lenth of String is %d",len);
	getch();
}