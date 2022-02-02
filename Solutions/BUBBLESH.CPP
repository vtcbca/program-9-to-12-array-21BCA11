/* Write a Program to print bubble short
   Author:Divyang Chaudhari
   21BCA11*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int a[10],i,n,j,temp;
	clrscr();
	printf("\nEnter the Value:");
	scanf("%d",&n);
	printf("\nEnter %d number:",n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	 for(j=0;j<n-1;j++)
	  {
	  if(a[j]>a[j+1])
	  {
	    temp=a[j];
	    a[j]=a[j+1];
	    a[j+1]=temp;
	  }
	 }
	}
	printf("\nSorated array:");
	for(i=0;i<n;i++)
	   printf("%d",a[i]);
	getch();
}