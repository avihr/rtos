#include<stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int i=1,sum=0,prod=1,avg=0,val=0;
	for(i=1;i<argc;i++)
	{
		val=atoi(argv[i]);
		sum+=val;
		prod*=val;
	}
	avg=sum/(argc-1);
	printf("Sum is %d\nProduct is %d\nAverage is %d\n",sum,prod,avg);
	return 0;
}
