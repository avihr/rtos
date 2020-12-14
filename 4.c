#include<stdio.h>

void main()
{
	int inp=0,sum=0,prod=1,avg=0,cnt=0;
	char str[100];
	FILE *file;
	file=fopen("4.txt","r");
	while(fgets(str,100,file)!=NULL)
	{
		inp=atoi(str);
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