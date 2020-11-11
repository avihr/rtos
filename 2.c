#include<stdio.h>
#include<stdlib.h>

void main(int argc, char const *argv[])
{
	int pid1,pid2,pid3;
	printf("This is parent process\n");
	pid1=fork();
	if (pid1==0)
	{
		printf("Inside child proces1\n");
		exit(-1);
	}
	else if (pid1<0)
	{
		printf("Fork failed\n");
	}

	pid2=fork();
	if (pid2==0)
	{
		printf("inside child proces2\n");
		exit(-1);
	
	}
	else if (pid2<0)
	{
		printf("Fork failed\n");
	}

	pid3=fork();
	if (pid3==0)
	{
		printf("Inside child proces3\n");
		exit(-1);
	}
	else if (pid3<0)
	{
		printf("Fork failed\n");
	}
	wait();
	return 0;
}