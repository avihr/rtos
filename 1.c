#include<stdio.h>
int sum(int arr[]);
int prod(int arr[]);
int avg(int arr[]);
void main()
{
	int i=0,arr[10],s,a,p;
	for(i=0;i<10;i++)
	{
		printf("Enter num%d:",i+1);
		scanf("%d",&arr[i]);
	}
	s=sum(arr);
	a=avg(arr);
	p=prod(arr);
	printf("Sum is %d\nProduct is %d\nAverage is %d\n",s,a,p);
}

int sum(int a[])
{
	int tot=0,i=0;
	for (i=0;i<10;i++)
	{
		tot+=a[i];
	}
	return tot;
}

int prod(int a[])
{
	int ptot=1,i=0;
	for(i=0;i<10;i++)
	{
		ptot*=a[i];
	}
	return ptot;
}

int avg(int a[])
{
	 int atot=0,i=0,aver;
	 for(i=0;i<10;i++)
	 {
	 	atot+=a[i];
	 }
	 aver=atot/10;
	 return aver;
}
