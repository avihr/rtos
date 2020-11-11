#include<stdio.h>

int main(int argc, char const *argv[])
{
	int high=0,low=0,i=0,sum=0,temp=0,m=0;
	high=atoi(argv[2]);
	low=atoi(argv[1]);
	i=low;
	if(high<low)
	{
		printf("Invalid Range\n");
		exit(0);
	}
	for (i = low; i <=high; i++)
	{
		temp=i;
		sum=0;
		while(temp>0)    
			{    
				m=temp%10;    
				sum=sum+m;    
				temp=temp/10;
			}
			if (sum==8)
				   {
				   	printf("Number=%d\n",i);
				   }     
	}

	return 0;
}