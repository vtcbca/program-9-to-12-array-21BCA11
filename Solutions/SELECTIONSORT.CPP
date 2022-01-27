/* WAP to perform selection sort.
  21BCA69*/

#include<stdio.h>
#include<conio.h>
 void main()
{
	int a[20],n,i=0,j,s;
	clrscr();
	printf("\n\t Enter Number of Element:");
	scanf("%d",&n);
	a[i]=n;
	for(i=0;i<n;i++)
	{
	  printf("\n\tEnter Num:");
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	  if(a[i]>a[j])
	  {
	  s=a[i];
	  a[i]=a[j];
	  a[j]=s;
	  }
	 }
	}
	printf("\n\tThe Sorted Array:");
	for(i=0;i<n;i++)
	{
	  printf("%d ",a[i]);
	}
	getch();
}


