#include<stdio.h>
#include<conio.h>
 void main()
{
	char a[10],b[10];
	int len=0,len1=0,i,j;
	clrscr();
	printf("\nEnter any String:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	    len++;
	printf("\nInputed string is :%s",a);
	printf("\nLenth of String is %d",len);
	printf("\nEnter any String:");
	gets(b);
	for(j=0;b[j]!='\0';j++)
	   len++;
	printf("\nInputed string is %s",b);
	printf("\nLenth of String is %d",len1);
	if(strcmp(a,b)==0)
		printf("\nYou entered same string");
	else
		printf("\nyour entered string is not same");
	getch();
}