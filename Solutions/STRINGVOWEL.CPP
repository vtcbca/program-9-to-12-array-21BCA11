/* write a program vowel from given string.
 21BCA69*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,I=0,v=0;
	char a[50],ch;
	clrscr();
	printf("\n\t Enter any String:");
	flushall();
	gets(a);
	while(a[I]!='\0')
	{
	    i++;
	}
	for(i=0;i<=I;i++)
	{
	 ch=a[i];
	 if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
	   {
	     v++;
	   }
	 }
	 printf("\n\t Total vowel is=%d",v);
	 getch();
}