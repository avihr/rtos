#include<stdio.h>

void main()
{
	int inp=0,sum=0,prod=1,avg=0,cnt=0;
	while(1)
	{
		printf("Enter input");
		scanf("%d",&inp);
		if(inp==999)
			break;
		else
		{
			sum+=inp;
			prod*=inp;
			cnt++;
		}
	}
	avg=sum/cnt;
	printf("Sum is %d\nProduct is %d\nAverage is %d\n",sum,prod,avg);
}